
/*

Question: D. Difference

Problem Statement:
Given four numbers A, B, C, and D, calculate the following equation:

X = (A * B) - (C * D)

Input: Only one line containing four space-separated integers A, B, C, and D.

Output: Print "Difference = " followed by the result of the equation.

Example Input:
1 2 3 4

Example Output:
Difference = -10

*/



#include <iostream>
using namespace std;

int main() {

    long long A, B, C, D;

    cout << "Enter Your First Number : ";
    cin >> A;
    cout << "Enter Your Second Number : ";
    cin >> B;
    cout << "Enter Your Third Number : ";
    cin >> C;
    cout << "Enter Your Forth Number : ";
    cin >> D;

    cout << "Difference = " << (A * B) - (C * D) << endl;

    return 0;
}



