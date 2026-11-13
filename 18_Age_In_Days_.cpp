
/*
Question: R. Age in Days

Problem Statement:
Given a number N corresponding to a person's age in days, print their age in years, months, and days, followed by their respective messages "years", "months", and "days".

Note:
Consider a whole year as 365 days and a month as 30 days.

Input:
Only one line containing a number N (0 <= N <= 10^6).

Output:
Print the age in years, months, and days as shown in the examples.

Example Input 1: 400
Example Output 1:
1 years
1 months
5 days

Example Input 2: 800
Example Output 2:
2 years
2 months
10 days

Example Input 3: 30
Example Output 3:
0 years
1 months
0 days

*/



#include <iostream>
using namespace std;

int main()
{
    int N;

    cout << "Enter Age in Days: ";
    cin >> N;

    int Years = N / 365;
    N = N % 365;

    int Months = N / 30;
    N = N % 30;

    int Days = N;

    cout << Years << " years" << endl;
    cout << Months << " months" << endl;
    cout << Days << " days" << endl;

    return 0;
}