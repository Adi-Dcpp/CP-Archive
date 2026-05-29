#!/usr/bin/env python3

from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def main() -> None:
    count = 0
    for path in ROOT.glob("Codeforces/*/*/solution.cpp"):
        count += 1
    print(count)


if __name__ == "__main__":
    main()
