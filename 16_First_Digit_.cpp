
/*
Question: P. First digit !

Problem Statement:
Given a number X. Print "EVEN" if the first digit of X is an even number. Otherwise, print "ODD".

For example:
In 4569, the first digit is 4, the second digit is 5, the third digit is 6, and the fourth digit is 9.

Input:
Only one line containing a number X (999 < X <= 9999).

Output:
Print "EVEN" if the first digit is even. Otherwise, print "ODD".

Example Input 1: 4569
Example Output 1: EVEN

Example Input 2: 3569
Example Output 2: ODD

Note:
In the second example, the first digit is 3, which is odd.

*/



#include <iostream>
using namespace std;

int main()
{
    int X;

    cout << "Enter a Four-Digit Number: ";
    cin >> X;

    int FirstDigit = X / 1000;

    if (FirstDigit % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;
}