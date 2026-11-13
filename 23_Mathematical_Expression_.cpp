
/*
Question: W. Mathematical Expression

Problem Statement:
Given a mathematical expression. The expression will be one of the following:

A + B = C
A - B = C
A * B = C

Where A, B, and C are three numbers, S is the mathematical operator between A and B, and Q is the '=' sign.

Print "Yes" if the expression is correct. Otherwise, print the correct answer of the expression.

Input:
Only one line containing the expression: A, S, B, Q, C respectively.

0 <= A, B <= 100
-10^5 <= C <= 10^5

S can be '+', '-', or '*'.

Output:
Print "Yes" if the expression is correct. Otherwise, print the correct answer.

Example Input 1: 5 + 10 = 15
Example Output 1: Yes

Example Input 2: 3 - 1 = 2
Example Output 2: Yes

Example Input 3: 2 * 10 = 19
Example Output 3: 20

*/



#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    char S, Q;

    cout << "Enter Mathematical Expression: ";
    cin >> A >> S >> B >> Q >> C;

    int Result;

    if (S == '+')
    {
        Result = A + B;
    }
    else if (S == '-')
    {
        Result = A - B;
    }
    else
    {
        Result = A * B;
    }

    if (Result == C)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << Result << endl;
    }

    return 0;
}