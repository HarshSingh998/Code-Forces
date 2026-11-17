
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
#include <iomanip>
using namespace std;

int main()
{
    long long A, B, C, D;

    cout << "Enter Four Numbers: ";
    cin >> A >> B >> C >> D;

    long long Result = (A % 100) * (B % 100) % 100;
    Result = (Result * (C % 100)) % 100;
    Result = (Result * (D % 100)) % 100;

    cout << setw(2) << setfill('0') << Result << endl;

    return 0;
}









/*
! Logic Understanding

Problem:
Given four numbers A, B, C, D, print the last two digits of their multiplication.

Logic:
1. Use (A % 100) * (B % 100) % 100 to calculate the last two digits.
2. Multiply the Result by C and D, applying % 100 after each multiplication.
3. Use setw(2) and setfill('0') to ensure the output always contains two digits.

Important:
- % 100 extracts the last two digits.
- long long handles large integer inputs.
- setw(2) and setfill('0') handle leading zeros.

Example:
Input: 434500145 147276606 217842775 236387740
Output: 00



* ( #include <iomanip> )
Why do we use it?
- It provides output formatting tools.
- setw(2) sets the minimum output width to 2 characters.
- setfill('0') fills empty spaces with 0.

*/