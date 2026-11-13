
/*

Question: A. Say Hello With C++

Problem Statement:
Given a name S, print Hello,  followed by the name without parentheses.

Input: A single line containing a string S.
Output: Print Hello,  followed by the given name.

*/


#include <iostream>
#include <string>
using namespace std;

int main() {

    string name;

    cout << "Enter What You Print :  ";
    cin >> name;

    cout << "Hello, " << name << endl;

    return 0;
}

