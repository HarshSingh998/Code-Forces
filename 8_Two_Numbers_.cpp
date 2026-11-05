
/*

Question: H. Two Numbers

Problem Statement:
Given two numbers A and B, print the floor, ceil, and round of A / B.

Note:
- Floor: The greatest integer less than or equal to a number.
- Ceil: The smallest integer greater than or equal to a number.
- Round: The nearest integer to a number.

Input:
Only one line containing two numbers A and B.

Output:
Print three lines in the following format:
1. floor A / B = Floor result
2. ceil A / B = Ceil result
3. round A / B = Round result

Example Input:
10 3

Example Output:
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3

*/




#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double A, B;

    cout << "Enter First Number (A): ";
    cin >> A;

    cout << "Enter Second Number (B): ";
    cin >> B;

    double result = A / B;

    cout << "floor " << A << " / " << B << " = " << floor(result) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;
    cout << "round " << A << " / " << B << " = " << round(result) << endl;

    return 0;
}






/*

#include <cmath> — provides mathematical functions like floor(), ceil() and round().


floor(result) — rounds down to the nearest integer.

ceil(result) — rounds up to the nearest integer.

round(result) — rounds to the nearest integer.

*/



