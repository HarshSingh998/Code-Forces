
/*
Question: Y. The Last 2 Digits

Problem Statement:
Given four numbers A, B, C, and D, print the last two digits of their multiplication.

Input:
Only one line containing four numbers A, B, C, and D.

Output:
Print the last two digits of their multiplication.

Example Input 1:
5 7 2 4

Example Output 1:
80

Example Input 2:
3 9 9 9

Example Output 2:
87

Note:
First Example:
5 * 7 * 2 * 4 = 280
The last two digits are 80.

Second Example:
3 * 9 * 9 * 9 = 2187
The last two digits are 87.

Understanding:
1. Multiply all four numbers.
2. Use the modulus operator (%) with 100.
3. The remainder gives the last two digits.

*/



#include <iostream>
using namespace std;

int main()
{
    long long A, B, C, D;

    cout << "Enter Four Numbers: ";
    cin >> A >> B >> C >> D;

    long long Result = (A * B * C * D) % 100;

    cout << Result << endl;

    return 0;
}