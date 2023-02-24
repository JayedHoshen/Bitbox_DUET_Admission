// 1+1/2+1/6+1/24+..............1/n! = ?
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int i, n, f = 1;
    double sum = 0;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        f *= i; 
        sum += (1.0/f);
    }

    cout << "Sum is = " << sum << endl;

    return 0;
}