
/*

Question: F. Digits Summation

Problem Statement:
Given two numbers N and M, print the summation of their last digits.

Input: Only one line containing two numbers N and M (0 ≤ N, M ≤ 10^18).

Output: Print the sum of the last digits of N and M.

Example Input:
13 12

Example Output:
5

Note:
The last digit of 13 is 3, and the last digit of 12 is 2.
Therefore, the answer is 3 + 2 = 5.

*/



#include <iostream>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    cout << (N % 10) + (M % 10) << endl;

    return 0;
}







/*

Easy trick to remember ( What Use )
- long long → Large whole numbers
- double → Decimal numbers

*/

