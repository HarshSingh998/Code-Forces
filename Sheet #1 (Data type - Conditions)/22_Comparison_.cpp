
/*
Question: V. Comparison

Problem Statement:
Given a comparison symbol S between two numbers A and B, determine whether the comparison is Right or Wrong.

The comparison can be:
A < B
A > B
A = B

Input:
Only one line containing A, S, and B respectively (-100 <= A, B <= 100).
S can be '<', '>', or '='.

Output:
Print "Right" if the comparison is true. Otherwise, print "Wrong".

Example Input 1: 5 > 4
Example Output 1: Right

Example Input 2: 9 < 1
Example Output 2: Wrong

Example Input 3: 4 = 4
Example Output 3: Right

*/



#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char S;

    cout << "Enter First Number: ";
    cin >> A;

    cout << "Enter Comparison Operator: ";
    cin >> S;

    cout << "Enter Second Number: ";
    cin >> B;

    if (S == '<' && A < B)
    {
        cout << "Right" << endl;
    }
    else if (S == '>' && A > B)
    {
        cout << "Right" << endl;
    }
    else if (S == '=' && A == B)
    {
        cout << "Right" << endl;
    }
    else
    {
        cout << "Wrong" << endl;
    }

    return 0;
}