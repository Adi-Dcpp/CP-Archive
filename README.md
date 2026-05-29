# CP-Archive

## Overview
CP-Archive is a long-term competitive programming knowledge base focused on clean C++ solutions, concise explanations, and reusable templates. The goal is to grow a structured archive rather than a dump of random submissions.

## Goals
- Build a consistent repository of well-documented solutions.
- Capture problem-solving intuition, not just code.
- Maintain reusable templates and notes for future contests.
- Track progress by rating bucket and topic coverage.

## Platforms
- Codeforces (primary)

## Folder Structure
```
CP-Archive/
│
├── README.md
│
├── Codeforces/
│   ├── 800/
│   ├── 900/
│   ├── 1000/
│   ├── 1100/
│   ├── 1200/
│   ├── 1300/
│   ├── 1400/
│   ├── 1500/
│   ├── 1600/
│   ├── 1700/
│   ├── 1800/
│   └── 1900/
│
├── Notes/
│
├── Templates/
│
└── Scripts/
```

## Progress Tracking

| Rating | Solved | Notes |
|:------:|:------:|:------|
| 800 | 1 | Starting bucket |
| 900 | 0 |  |
| 1000 | 0 |  |
| 1100 | 0 |  |
| 1200 | 0 |  |
| 1300 | 0 |  |
| 1400 | 0 |  |
| 1500 | 0 |  |
| 1600 | 0 |  |
| 1700 | 0 |  |
| 1800 | 0 |  |
| 1900 | 0 |  |

## Topics Covered
- Implementation
- Sorting and greedy basics
- Data structures (planned)
- Graphs (planned)
- DP (planned)

## Repository Philosophy
- Prioritize clarity over cleverness.
- Keep explanations concise and practical.
- Record key observations and complexity notes for every problem.

## Contributions
- Create a new folder per problem using the format: `Codeforces/<rating>/<contestId>_<Title>/`.
- Each problem folder should contain `README.md` and `solution.cpp`.
- Keep problem summaries paraphrased; do not paste full statements.

## Future Plans
- Add topic-based index in `Notes/`.
- Expand scripts to auto-update progress table.
- Add test harnesses for local verification.

## Git Practices

**Commit message format**
- `solve: CF 1903A Halloumi Boxes`
- `note: add two-pointers cheat sheet`
- `chore: update progress table`

**Branch strategy**
- `main` for stable updates.
- Short-lived feature branches for batches (e.g., `feat/cf-800-set`).

**Best practices**
- One problem per commit.
- Keep commits small and descriptive.
- Avoid mixing template changes with solutions in the same commit.

## Daily Workflow
1. Pick 1-3 problems from a single rating bucket.
2. Solve, write a short README, then clean up code.
3. Update progress table weekly (or via script).
4. Refactor templates if a pattern repeats.

---

Happy grinding. 🚀
