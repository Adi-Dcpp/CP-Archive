# 1920C - Partitioning the Array

- **Link:** https://codeforces.com/problemset/problem/1920/C
- **Platform:** Codeforces
- **Rating:** 1600
- **Tags:** brute force, math, number theory,
- **Status:** Solved
- **Last Updated:** 2026-07-27

## Problem Description
Allen has an array a1,a2,…,an
. For every positive integer k
 that is a divisor of n
, Allen does the following:

He partitions the array into nk
 disjoint subarrays of length k
. In other words, he partitions the array into the following subarrays:
[a1,a2,…,ak],[ak+1,ak+2,…,a2k],…,[an−k+1,an−k+2,…,an]
Allen earns one point if there exists some positive integer m
 (m≥2
) such that if he replaces every element in the array with its remainder when divided by m
, then all subarrays will be identical.
Help Allen find the number of points he will earn.

## Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — the elements of the array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.



## Output
For each test case, output a single integer — the number of points Allen will earn.



## Complexity
- Time:  O(n * d(n) + sqrt(n)) per test case
- Space: O(n + d(n))

