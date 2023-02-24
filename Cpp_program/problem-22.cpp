/*
// check prime number using flag variable
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    bool f = 0;
    int n, i;

    cout << "Enter any positive number = ";
    cin >> n;

    for (i = 2; i<n; i++) {
        if (n%i == 0) {
            f = 1;
            break;
        }
    }

    if (f==1 || n==1) cout << n << " is Not a Prime number.\n";
    else cout << n << " is a Prime number.\n";

    return 0;
}
*/

// check prime number using factor of sum method
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Enter any positive number = ";
    cin >> n;

    //cout << n << " factor of all is = ";
    for (i = 1; i <= n; i++) {
        if (n % i == 0){ 
           // cout << i << " "    ;
            sum += i;
        }
    }
    //cout << endl;
    if (sum == (n+1)) cout << n << " is a prime number.\n";
    else cout << n << " is not a prime number.\n";

    return 0;
}