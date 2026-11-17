
/*
Question: T. Sort Numbers

Problem Statement:
Given three numbers A, B, and C. Print these numbers in ascending order followed by a blank line and then print the values in the same sequence as they were read.

Input:
Only one line containing three numbers A, B, and C (-10^6 <= A, B, C <= 10^6).

Output:
Print the values in ascending order followed by a blank line and then print the values in the original order.

Example Input 1:
3 -2 1

Example Output 1:
-2
1
3

3
-2
1

Example Input 2:
-2 10 0

Example Output 2:
-2
0
10

-2
10
0

*/



#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int A, B, C;

    cout << "Enter Three Numbers: ";
    cin >> A >> B >> C;

    int X = A, Y = B, Z = C;

    if (X > Y)
    {
        swap(X, Y);
    }

    if (X > Z)
    {
        swap(X, Z);
    }

    if (Y > Z)
    {
        swap(Y, Z);
    }

    cout << X << endl;
    cout << Y << endl;
    cout << Z << endl;

    cout << endl;

    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    return 0;
}








/*

We use #include <algorithm> because it provides many ready-made functions in C++, such as:
- sort()
- swap()
- reverse()
- max()
- min()

*/