
/*
Question: O. Calculator

Problem Statement:
Given a mathematical expression. The expression will contain two numbers and one operator.

The operator will be one of the following:
+ (Addition)
- (Subtraction)
* (Multiplication)
/ (Division)

Print the result of the mathematical expression.

Input:
Only one line contains the mathematical expression consisting of two numbers A and B, and an operator Op.

Output:
Print the result of the mathematical expression.

Example Input 1: 7+54
Example Output 1: 61

Example Input 2: 17*10
Example Output 2: 170

Note:
For the division operation, print the result without any fractions.

*/




#include <iostream>
using namespace std;

int main()
{
    int A, B;
    char Operator;

    cout << "Enter an Expression: ";
    cin >> A >> Operator >> B;

    if (Operator == '+')
    {
        cout << A + B << endl;
    }
    else if (Operator == '-')
    {
        cout << A - B << endl;
    }
    else if (Operator == '*')
    {
        cout << A * B << endl;
    }
    else if (Operator == '/')
    {
        cout << A / B << endl;
    }

    return 0;
}