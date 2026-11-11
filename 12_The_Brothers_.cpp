
/*
Question: L. The Brothers

Problem Statement:
Given two person names.

Each person has a first name and a second name.

Determine whether they are brothers or not.

Note:
The two persons are brothers if they share the same second name.

Input:
First line contains two strings F1 and S1, representing the first and second names of the 1st person.

Second line contains two strings F2 and S2, representing the first and second names of the 2nd person.

Output:
Print "ARE Brothers" if they share the same second name.
Otherwise, print "NOT".

Example Input 1:
bassam ramadan
ahmed ramadan

Example Output 1:
ARE Brothers

Example Input 2:
ali salah
ayman salah

Example Output 2:
ARE Brothers

Example Input 3:
ali kamel
ali salah

Example Output 3:
NOT

*/




#include <iostream>
#include <string>
using namespace std;

int main()
{
    string F1, S1, F2, S2;

    cout << "Enter First Person's First Name and Second Name: ";
    cin >> F1 >> S1;

    cout << "Enter Second Person's First Name and Second Name: ";
    cin >> F2 >> S2;

    if (S1 == S2)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT Brothers" << endl;
    }

    return 0;
}






/*

! Beginner-friendly explanation :-

1. string F1, S1, F2, S2; — declares four string variables.
2. cin >> F1 >> S1; — takes the first person's first and second names.
3. cin >> F2 >> S2; — takes the second person's first and second names.
4. if (S1 == S2) — checks whether both second names are equal.
5. If equal, print "ARE Brothers".
6. Otherwise, print "NOT".

*/