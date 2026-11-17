
/*
Question: B. Memo and Momo

Problem:
Given three positive integers A, B, K.

Determine whether A and B are divisible by K.

Output:
- Print "Both" if both A and B are divisible by K.
- Print "Memo" if only A is divisible by K.
- Print "Momo" if only B is divisible by K.
- Print "No One" if neither is divisible by K.

Examples:

Input:
15 7 3

Output:
Memo

Input:
22 10 2

Output:
Both

!Logic:
1. Use the modulus (%) operator to check divisibility.
2. If A % K == 0 and B % K == 0, print "Both".
3. If only A % K == 0, print "Memo".
4. If only B % K == 0, print "Momo".
5. Otherwise, print "No One".

*/




#include <iostream>
using namespace std;

int main()
{
    long long A, B, K;

    cout << "Enter First Number: ";
    cin >> A;

    cout << "Enter Second Number: ";
    cin >> B;

    cout << "Enter Divisor: ";
    cin >> K;

    if (A % K == 0 && B % K == 0)
    {
        cout << "Both" << endl;
    }
    else if (A % K == 0)
    {
        cout << "Memo" << endl;
    }
    else if (B % K == 0)
    {
        cout << "Momo" << endl;
    }
    else
    {
        cout << "No One" << endl;
    }

    return 0;
}

