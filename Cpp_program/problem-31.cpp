/*
// decimal to binary convertion
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i, n, sum = 0, p = 1;

    cout << "Enter any integer number = ";
    cin >> n;

    for (i = n; i > 0; i/=2) {
        sum += p * (i%2);
        p *= 10;
    }
    cout << "Binary value is = " << sum << endl;

    return 0;
}
*/

// decimal to octal convertion
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i, n, sum = 0, p = 1;

    cout << "Enter any integer number = ";
    cin >> n;

    for (i = n; i > 0; i/=8) {
        sum += p * (i%8);
        p *= 10;
    }
    cout << "Binary value is = " << sum << endl;

    return 0;
}