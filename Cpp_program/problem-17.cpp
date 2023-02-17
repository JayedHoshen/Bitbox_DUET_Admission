// sum of 1 to n 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << i << " + ";
        sum += i;
    }
    cout << "= " << sum << endl;

    sum = 0;   
    for (i = 1; i <= n; i+=2) {
        cout << i << " + ";
        sum += i;
    }
    cout << "= " << sum << endl;

    sum = 0;
    for (i = 2; i <= n; i+=2) {
        cout << i << " + ";
        sum += i;
    }
    cout << "= " << sum << endl;

    return 0;
}