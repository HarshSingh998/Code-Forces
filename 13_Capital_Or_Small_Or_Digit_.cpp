
/*
Question: M. Capital or Small or Digit

Problem Statement:
Given a character X, determine whether X is Digit or Alphabet. If X is Alphabet, determine whether it is Capital Case or Small Case.

Input:
Only one line containing a character X, which will be a capital letter, small letter, or digit.

Output:
Print "IS DIGIT" if X is a digit. Otherwise, print "ALPHA" in the first line followed by "IS CAPITAL" if X is a capital letter or "IS SMALL" if X is a small letter.

Example Input 1: A
Example Output 1:
ALPHA
IS CAPITAL

Example Input 2: 9
Example Output 2: IS DIGIT

Example Input 3: a
Example Output 3:
ALPHA
IS SMALL

Note:
Digits in ASCII: '0' = 48, '1' = 49, etc.
Capital letters in ASCII: 'A' = 65, 'B' = 66, etc.
Small letters in ASCII: 'a' = 97, 'b' = 98, etc.

*/




#include <iostream>
using namespace std;

int main()
{
    char X;

    cout << "Enter a Character: ";
    cin >> X;

    if (X >= '0' && X <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;

        if (X >= 'A' && X <= 'Z')
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}