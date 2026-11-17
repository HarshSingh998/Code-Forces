
/*
Question: U. Float or int

Problem Statement:
Given a number X, determine whether X is a float number or an integer number.

Note:
- If X is a float number, print "float" followed by the integer part and decimal part separated by a space.
- If X is an integer number, print "int" followed by the integer part separated by a space.

Input:
Only one line containing a number X.

Output:
Print the answer as required.

Example Input 1: 234.000
Example Output 1: int 234

Example Input 2: 534.958
Example Output 2: float 534 0.958

*/



#include <iostream>
using namespace std;

int main()
{
    double X;

    cout << "Enter a Number: ";
    cin >> X;

    int IntegerPart = X;
    double DecimalPart = X - IntegerPart;

    if (DecimalPart == 0)
    {
        cout << "int " << IntegerPart << endl;
    }
    else
    {
        cout << "float " << IntegerPart << " " << DecimalPart << endl;
    }

    return 0;
}