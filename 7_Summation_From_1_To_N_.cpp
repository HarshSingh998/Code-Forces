
/*

Question: G. Summation from 1 to N

Problem Statement:
Given a number N, print the summation of all numbers between 1 and N (inclusive).

Input: Only one line containing a number N.

Output: Print the sum of all numbers from 1 to N (inclusive).

Example Input 1:  3
Example Output 1:  6

Example Input 2:  10
Example Output 2:  55

Note:
For N = 3:
1 + 2 + 3 = 6

For N = 10:
1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55

*/





#include <iostream>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long sum = N * (N + 1) / 2;

    cout << sum << endl;

    return 0;
}
