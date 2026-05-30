# 1901A - Line Trip

## Overview
| Field | Value |
| --- | --- |
| Link | https://codeforces.com/problemset/problem/1901/A |
| Platform | Codeforces |
| Rating | 800 |
| Tags | greedy, math |
| Status | Solved |
| Last Updated | 2026-05-30 |

## Problem Description
You are on a number line at point 0 and want to travel to point x and return to 0.

Your car consumes 1 liter of fuel per unit distance. At point 0 the tank starts full, and whenever you arrive at a gas station you refuel to full. Gas stations are located at positions a1, a2, ..., an with 0 < a1 < ... < an < x. There are no stations at 0 or x.

Find the minimum possible tank capacity (in liters) that allows the trip from 0 to x and back to 0.

## Input
- The first line contains an integer t (1 <= t <= 1000), the number of test cases.
- Each test case consists of two lines:
	- Integers n and x (1 <= n <= 50, 2 <= x <= 100).
	- Integers a1, a2, ..., an (0 < a1 < a2 < ... < an < x).

## Output
- For each test case, print one integer: the minimum tank capacity required.

## Complexity
- Time: O(n) per test case
- Space: O(n)
