/*
// binary to decimal convertion
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i, n, sum = 0, p = 1;

    cout << "Enter any binary number = ";
    cin >> n;

    for (i = n; i > 0; i/=10) {
        sum += p * (i%10);
        p *= 2;
    }
    cout << "Decimal value is = " << sum << endl;

    return 0;
}
*/
// octal to decimal convertion
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i, n, sum = 0, p = 1;

    cout << "Enter any Octal number = ";
    cin >> n;

    for (i = n; i > 0; i/=10) {
        sum += p * (i%10);
        p *= 8;
    }
    cout << "Decimal value is = " << sum << endl;

    return 0;
}