#!/usr/bin/env python3

"""
Updates the progress table in README.md.
Currently prints computed stats; extend to edit the table when ready.
"""

from collections import defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def main() -> None:
    buckets = defaultdict(int)
    for path in ROOT.glob("Codeforces/*/*/solution.cpp"):
        rating = path.parents[1].name
        buckets[rating] += 1

    for rating in sorted(buckets.keys(), key=int):
        print(f"{rating}: {buckets[rating]}")


if __name__ == "__main__":
    main()
