// vowel/consonent
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;

    cout << "Enter any character = ";
    cin >> ch;

    /*if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "Vowel.\n";
    }
    else cout << "Consonent.\n";*/

    // switch use
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': cout << "Vowel.\n"; break;
    
    default: cout << "Consonent.\n";
        break;
    }

    return 0;
}