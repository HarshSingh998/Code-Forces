
/*
Question: K. Max and Min

Problem Statement:
Given three numbers A, B, and C, print the minimum and maximum numbers.

Input:
Only one line containing three numbers A, B, and C (-10^5 ≤ A, B, C ≤ 10^5).

Output:
Print the minimum number followed by a single space, then print the maximum number.

Example Input 1:
1 2 3

Example Output 1:
1 3

Example Input 2:
-1 -2 -3

Example Output 2:
-3 -1

Example Input 3:
10 20 -5

Example Output 3:
-5 20

*/





#include <iostream>
using namespace std;

int main() {

    int A, B, C;

    cout << "Enter Your First Number : " ;
    cin >> A ;

    cout << "Enter Your Second Number : " ;
    cin >> B ;

    cout << "Enter Your Third Number : " ;
    cin >> C ;

    int minimum = A;
    int maximum = A;

    if (B < minimum) {
        minimum = B;
    }

    if (C < minimum) {
        minimum = C;
    }

    if (B > maximum) {
        maximum = B;
    }

    if (C > maximum) {
        maximum = C;
    }

    cout << "Minimum Number Is : " << minimum << endl ;
    cout << "Maximum Number Is : " << maximum << endl ;

    return 0;
}
