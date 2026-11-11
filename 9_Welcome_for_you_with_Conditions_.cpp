
/*
Question: I. Welcome for you with Conditions

Problem Statement:
Given two numbers A and B, print "Yes" if A is greater than or equal to B.
Otherwise, print "No".

Input:
Only one line containing two numbers A and B (0 ≤ A, B ≤ 100).

Output:
Print "Yes" or "No" according to the condition.

Example Input 1:
10 9

Example Output 1:
Yes

Example Input 2:
5 5

Example Output 2:
Yes

Example Input 3:
5 7

Example Output 3:
No

*/





#include <iostream>
using namespace std;

int main() {

    int A, B;

    cout << "Enter Your First Number : " << endl;
    cin >> A ;

    cout << "Enter Your Second Number : " << endl;
    cin >> B ;

    if (A >= B) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}



