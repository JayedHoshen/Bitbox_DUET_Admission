// leap year
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;

    cout << "Enter any year = ";
    cin >> y;

    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        cout << "Leap year.\n";
    }
    else cout << "Not a leap year.\n";

    return 0;
}