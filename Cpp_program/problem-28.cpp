// check perfect number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, sum = 0;

    cout << "Enter a number = ";
    cin >> n;

    for (i = 1; i <= n-1; i++) {
        if (n%i==0) sum += i;
    }
    
    if (sum == n) cout << "Perfect number.\n";
    else cout << "Not a perfect number.\n";

    return 0;
}