// power function implementation
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, powr = 1;

    cout << "Enter base (n) & power (p) value = ";
    cin >> n >> p;

    for (int i = 1; i<=p; i++) {
        powr *= n;
    }
    cout << n << " of " << p << " power is = " << powr << endl;

    return 0;
}