
/*
Question: Z. Hard Compare

Problem:
Given four numbers A, B, C, D, compare A^B with C^D.

Print "YES" if A^B > C^D.
Otherwise, print "NO".

Input:
Four integers A, B, C, D.

Output:
Print "YES" or "NO".

Example:
Input:
3 2 5 4

Output:
NO

Logic:
Compare A^B and C^D.
If A^B is greater, print YES; otherwise, print NO.

Note:
- ^ represents power in the problem statement.
- In C++, ^ is NOT a power operator.
- Use logarithms or another suitable method to compare large powers.

*/





#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long A, B, C, D;

    cout << "Enter Four Numbers: ";
    cin >> A >> B >> C >> D;

    long double First = B * logl(A);
    long double Second = D * logl(C);

    if (First > Second)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
