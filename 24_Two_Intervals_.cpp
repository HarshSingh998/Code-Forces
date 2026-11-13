
/*
Question: X. Two Intervals

Problem Statement:
Given the boundaries of two intervals, print the boundaries of their intersection.

Note:
Boundaries mean the two ends of an interval, which are the starting number and the ending number.

Input:
Only one line contains four numbers representing two intervals:
L1, R1, L2, R2.

It is guaranteed that L1 <= R1 and L2 <= R2.

Output:
If there is an intersection between the two intervals, print its boundaries. Otherwise, print -1.

Example Input 1:
1 15 5 27

Example Output 1:
5 15

Example Input 2:
2 5 6 12

Example Output 2:
-1

*/




#include <iostream>
using namespace std;

int main()
{
    int L1, R1, L2, R2;

    cout << "Enter First Interval: ";
    cin >> L1 >> R1;

    cout << "Enter Second Interval: ";
    cin >> L2 >> R2;

    int Start = max(L1, L2);
    int End = min(R1, R2);

    if (Start <= End)
    {
        cout << Start << " " << End << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}










/*

! Logic Of This Question

Understanding:
Given two intervals, find the common (overlapping) part between them.

Example:
First Interval: 1 to 15
Second Interval: 5 to 27

Common Part: 5 to 15
Output: 5 15

If there is no common part, print -1.

Logic:
1. Find the maximum starting point using max().
2. Find the minimum ending point using min().
3. If Start <= End, print Start and End.
4. Otherwise, print -1.

*/
