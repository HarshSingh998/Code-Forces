/*

Question: E. Area of a Circle

Problem Statement:
Given a number R, calculate the area of a circle using the formula:
Area = π * R²

Note:
Consider π = 3.141592653.

Input: Only one line containing the number R (1 ≤ R ≤ 100).

Output: Print the calculated area with 9 digits after the decimal point.

Example Input:
2.00

Example Output:
12.566370612

*/



#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r;
    cout << "Enter Your Radius : ";
    cin >> r;

    cout << fixed << setprecision(9);
    cout << "Area Of Circle : " << 3.141592653 * r * r << endl;

    return 0;
}
