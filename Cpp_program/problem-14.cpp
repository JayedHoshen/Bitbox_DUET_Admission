// what type of an single character
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;

    cout << "Enter any character = ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') cout << "Small letter.\n";
    else if (ch >= 'A' && ch <= 'Z') cout << "Capital letter.\n";
    else if (ch >= '0' && ch <= '9') cout << "Digit.\n";
    else cout << "Symbol.\n";

    return 0;
}