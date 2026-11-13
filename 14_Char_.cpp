
/*
Question: N. Char

Problem Statement:
Given a letter X. If the letter is lowercase, print the letter after converting it from lowercase to uppercase. 
Otherwise, print the letter after converting it from uppercase to lowercase.

Input:
Only one line containing a character X which will be a capital or small letter.

Output:
Print the answer to this problem.

Example Input 1: a
Example Output 1: A

Example Input 2: A
Example Output 2: a

Note:
The difference between 'a' and 'A' in ASCII is 32.

*/



#include <iostream>
using namespace std;

int main()
{
    char X;

    cout << "Enter a Character: ";
    cin >> X;

    if (X >= 'a' && X <= 'z')
    {
        X = X - 32;
    }
    else
    {
        X = X + 32;
    }

    cout << X << endl;

    return 0;
}