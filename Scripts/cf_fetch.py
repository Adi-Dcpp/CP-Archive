#!/usr/bin/env python3

import argparse
import json
import re
import sys
from pathlib import Path
from urllib.parse import urlparse
from urllib.request import urlopen

ROOT = Path(__file__).resolve().parents[1]
TEMPLATE_README = ROOT / "Templates" / "problem_readme_template.md"
TEMPLATE_SOLUTION = ROOT / "Templates" / "cp_template.cpp"


def fetch_problemset():
    url = "https://codeforces.com/api/problemset.problems"
    with urlopen(url, timeout=15) as resp:
        data = json.loads(resp.read().decode("utf-8"))
    if data.get("status") != "OK":
        raise RuntimeError("Failed to fetch Codeforces problemset")
    return data["result"]["problems"]


def parse_problem_url(url: str):
    parsed = urlparse(url)
    path = parsed.path.strip("/")

    # Supported formats:
    # /problemset/problem/<contestId>/<index>
    # /contest/<contestId>/problem/<index>
    parts = path.split("/")
    if len(parts) >= 4 and parts[0] == "problemset" and parts[1] == "problem":
        return int(parts[2]), parts[3]
    if len(parts) >= 4 and parts[0] == "contest" and parts[2] == "problem":
        return int(parts[1]), parts[3]
    raise ValueError("Unrecognized Codeforces problem URL format")


def slugify_title(title: str) -> str:
    # Keep a clean, file-system-safe title
    cleaned = re.sub(r"[^A-Za-z0-9]+", "_", title).strip("_")
    return cleaned or "Problem"


def fill_template(text: str, mapping: dict) -> str:
    for key, value in mapping.items():
        text = text.replace(f"<{key}>", value)
    return text


def main() -> int:
    parser = argparse.ArgumentParser(description="Generate Codeforces problem folder from URL")
    parser.add_argument("url", help="Codeforces problem URL")
    args = parser.parse_args()

    try:
        contest_id, index = parse_problem_url(args.url)
    except Exception as exc:
        print(f"Error: {exc}", file=sys.stderr)
        return 1

    try:
        problems = fetch_problemset()
    except Exception as exc:
        print(f"Error: {exc}", file=sys.stderr)
        return 1

    problem = None
    for p in problems:
        if p.get("contestId") == contest_id and p.get("index") == index:
            problem = p
            break
    if not problem:
        print("Error: problem not found in Codeforces API", file=sys.stderr)
        return 1

    title = problem.get("name", "Unknown")
    rating = str(problem.get("rating", "Unrated"))
    tags = ", ".join(problem.get("tags", [])) or "<tag1>, <tag2>"

    folder_name = f"{contest_id}{index}_{slugify_title(title)}"
    target_dir = ROOT / "Codeforces" / rating / folder_name
    target_dir.mkdir(parents=True, exist_ok=True)

    if not TEMPLATE_README.exists():
        print("Error: README template not found", file=sys.stderr)
        return 1
    if not TEMPLATE_SOLUTION.exists():
        print("Error: solution template not found", file=sys.stderr)
        return 1

    readme_text = TEMPLATE_README.read_text(encoding="utf-8")
    readme_text = fill_template(
        readme_text,
        {
            "ProblemID": f"{contest_id}{index}",
            "Problem Title": title,
            "Problem URL": f"https://codeforces.com/problemset/problem/{contest_id}/{index}",
            "Rating": rating,
            "tag1": tags,
        },
    )

    solution_text = TEMPLATE_SOLUTION.read_text(encoding="utf-8")

    (target_dir / "README.md").write_text(readme_text, encoding="utf-8")
    (target_dir / "solution.cpp").write_text(solution_text, encoding="utf-8")

    print(str(target_dir))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
