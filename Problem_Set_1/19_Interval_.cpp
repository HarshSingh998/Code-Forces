
/*
Question: S. Interval

Problem Statement:
Given a number X, determine in which of the following intervals the number X belongs to:

[0,25], (25,50], (50,75], (75,100]

Note:
- If X belongs to any of the above intervals, print "Interval " followed by the interval.
- If X does not belong to any of the above intervals, print "Out of Intervals".
- The symbol '(' represents greater than.
- The symbol ')' represents smaller than.
- The symbol '[' represents greater than or equal to.
- The symbol ']' represents smaller than or equal to.

Input:
Only one line containing a number X (-1000 <= X <= 1000).

Output:
Print the answer to the problem.

Example Input 1: 25.1
Example Output 1: Interval (25,50]

Example Input 2: 25.0
Example Output 2: Interval [0,25]

Example Input 3: 100.0
Example Output 3: Interval (75,100]

Example Input 4: -25.2
Example Output 4: Out of Intervals

*/




#include <iostream>
using namespace std;

int main()
{
    double X;

    cout << "Enter a Number: ";
    cin >> X;

    if (X >= 0 && X <= 25)
    {
        cout << "Interval [0,25]" << endl;
    }
    else if (X > 25 && X <= 50)
    {
        cout << "Interval (25,50]" << endl;
    }
    else if (X > 50 && X <= 75)
    {
        cout << "Interval (50,75]" << endl;
    }
    else if (X > 75 && X <= 100)
    {
        cout << "Interval (75,100]" << endl;
    }
    else
    {
        cout << "Out of Intervals" << endl;
    }

    return 0;
}