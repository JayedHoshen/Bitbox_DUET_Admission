// find factor of a number & sum of all factors
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "Enter a number = ";
    cin >> n;

    cout << "Factor of n is = ";
    for (i = 1; i<=n; i++) {
        if (n%i == 0) {
            cout << i << " ";
            sum += i;
        }
    }

    cout << "\nSum of all factors = " << sum;

    return 0;
}