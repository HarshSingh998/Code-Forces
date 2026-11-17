
/*
Question: A. Winter Sale

Problem:
Given the discount percentage D and the price P after applying the discount, calculate the original price before the discount.

Input:
Two numbers:
D = Discount percentage
P = Price after discount

Output:
Print the original price rounded to two decimal places.

Examples:

Input:
20 80

Output:
100.00

Input:
15 20

Output:
23.53

! Logic:
1. Calculate the remaining percentage: 100 - D.
2. Original Price = (P * 100) / (100 - D).
3. Use fixed and setprecision(2) to print two decimal places.

*/




#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double D, P;

    cout << "Enter Discount Percentage: ";
    cin >> D;

    cout << "Enter Price After Discount: ";
    cin >> P;

    double OriginalPrice = (P * 100) / (100 - D);

    cout << fixed << setprecision(2) << OriginalPrice << endl;

    return 0;
}
