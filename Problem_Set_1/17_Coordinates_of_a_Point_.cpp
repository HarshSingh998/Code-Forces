
/*
Question: Q. Coordinates of a Point

Problem Statement:
Given two numbers X and Y, which denote the coordinates of a point in a 2D plane, determine in which quarter the point belongs.

Note:
- Print "Q1", "Q2", "Q3", or "Q4" according to the quarter in which the point belongs.
- Print "Origem" if the point is at the origin.
- Print "Eixo X" if the point is on the X-axis.
- Print "Eixo Y" if the point is on the Y-axis.

Input:
Only one line containing two numbers X and Y (-1000 <= X, Y <= 1000).

Output:
Print the answer to the problem.

Example Input 1: 4.5 -2.2
Example Output 1: Q4

Example Input 2: 0.1 0.1
Example Output 2: Q1

*/




#include <iostream>
using namespace std;

int main()
{
    double X, Y;

    cout << "Enter X and Y Coordinates: ";
    cin >> X >> Y;

    if (X == 0 && Y == 0)
    {
        cout << "Origem" << endl;
    }
    else if (X == 0)
    {
        cout << "Eixo Y" << endl;
    }
    else if (Y == 0)
    {
        cout << "Eixo X" << endl;
    }
    else if (X > 0 && Y > 0)
    {
        cout << "Q1" << endl;
    }
    else if (X < 0 && Y > 0)
    {
        cout << "Q2" << endl;
    }
    else if (X < 0 && Y < 0)
    {
        cout << "Q3" << endl;
    }
    else
    {
        cout << "Q4" << endl;
    }

    return 0;
}