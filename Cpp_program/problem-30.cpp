// Reverse a number & check it's palindrome number or not
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i, n, sum = 0;

    cout << "Enter an integer number = ";
    cin >> n;

    for (i = n; i > 0; i/=10) {
        sum = sum * 10 + (i%10);
    }
    cout << "Reverse value is = " << sum << endl;

    if (sum == n) cout << "Palindrome number.\n";
    else cout << "Not a palindrome number.\n";

    return 0;
}