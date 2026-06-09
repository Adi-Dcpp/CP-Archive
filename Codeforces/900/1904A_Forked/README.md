# 1904A - Forked!

- **Link:** https://codeforces.com/problemset/problem/1904/A
- **Platform:** Codeforces
- **Rating:** 900
- **Tags:** brute force, implementation,
- **Status:** Solved
- **Last Updated:** 2006-06-09

## Problem Description
Lunchbox is done with playing chess! His queen and king just got forked again!

In chess, a fork is when a knight attacks two pieces of higher value, commonly the king and the queen. Lunchbox knows that knights can be tricky, and in the version of chess that he is playing, knights are even trickier: instead of moving 1
 tile in one direction and 2
 tiles in the other, knights in Lunchbox's modified game move a
 tiles in one direction and b
 tiles in the other.

Lunchbox is playing chess on an infinite chessboard which contains all cells (x,y)
 where x
 and y
 are (possibly negative) integers. Lunchbox's king and queen are placed on cells (xK,yK)
 and (xQ,yQ)
 respectively. Find the number of positions such that if a knight was placed on that cell, it would attack both the king and queen.



## Input
Each test contains multiple test cases. The first line contains an integer t
 (1≤t≤1000
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers a
 and b
 (1≤a,b≤108
) — describing the possible moves of the knight.

The second line of each test case contains two integers xK
 and yK
 (0≤xK,yK≤108
) — the position of Lunchbox's king.

The third line in a test case contains xQ
 and yQ
 (0≤xQ,yQ≤108
) — the position of Lunchbox's queen.

It is guaranteed that Lunchbox's queen and king will occupy different cells. That is, (xK,yK)≠(xQ,yQ)
.

## Output
For each test case, output the number of positions on an infinite chessboard such that a knight can attack both the king and the queen.

## Complexity
- Time: O(24) per test case
- Space: O(8)

