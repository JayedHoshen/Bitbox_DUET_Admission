// single integer value i/p নিয়ে কথায় প্রকাশ
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a number (0-9) = ";
    cin >> ch;

    switch (ch)
    {
    case '0': cout << "Zero.\n"; break;
    case '1': cout << "One.\n"; break;
    case '2': cout << "Two.\n"; break;
    case '3': cout << "Three.\n"; break;
    case '4': cout << "Four.\n"; break;
    case '5': cout << "Five.\n"; break;
    case '6': cout << "Six.\n"; break;
    case '7': cout << "Seven.\n"; break;
    case '8': cout << "Eight.\n"; break;
    case '9': cout << "Nine.\n"; break;    
    default: cout << "Enter a valid number.\n";
        break;
    }

    return 0;
}