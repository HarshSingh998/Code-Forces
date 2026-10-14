
/*

Question: C. Simple Calculator

Problem Statement:
Given two numbers X and Y, print their:
1. Summation (addition)
2. Multiplication
3. Subtraction

Input:
Only one line containing two space-separated numbers X and Y.

Output:
Print three lines containing the summation, multiplication, and subtraction results in the specified format.

Example Input:
5 10

Example Output:
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5

Note:
Be careful with spaces.

*/


#include <iostream>
using namespace std;

int main() {

    int X;
    cout << "Enter Your First Number : ";
    cin >> X;

    int Y;
    cout << "Enter Your Second Number : ";
    cin >> Y;

    cout << X + Y << endl;
    cout << X * Y << endl;
    cout << X - Y << endl;



    return 0;
}


