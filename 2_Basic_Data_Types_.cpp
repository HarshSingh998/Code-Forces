/*

Question: B. Basic Data Types

Problem Statement :
You are given five space-separated values of the following data types, in this order:

- int — 32-bit integer
- long long — 64-bit integer
- char — character
- float — decimal number
- double — decimal number with greater precision

*/


#include <iostream>
using namespace std;

int main() {

    int a;
    long long b;
    char c;
    float d;
    double e;

    cout << "Enter Integer: ";
    cin >> a;

    cout << "Enter Long Long: ";
    cin >> b;

    cout << "Enter Character: ";
    cin >> c;

    cout << "Enter Float: ";
    cin >> d;

    cout << "Enter Double: ";
    cin >> e;

    cout << endl;

    cout << "Integer: " << a << endl;
    cout << "Long Long: " << b << endl;
    cout << "Character: " << c << endl;
    cout << "Float: " << d << endl;
    cout << "Double: " << e << endl;

    return 0;
}

