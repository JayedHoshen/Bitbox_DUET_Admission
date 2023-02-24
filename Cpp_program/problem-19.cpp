// Calculate factorial
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, fact = 1;

    cout << "Enter any positive number = ";
    cin >> n;

    for (i = 1; i<=n; i++) fact *= i;
    
    cout << "Factorial = " << fact << endl;

    return 0;
}