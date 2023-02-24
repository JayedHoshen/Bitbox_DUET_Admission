// print this triangle series pattern
/*
    1
    2 1
    3 2 1
    4 3 2 1
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++ ) {
        for (j = i; j >= 1; j--) {
            cout << j << ' ';
        }        
        cout << endl;
    }

    return 0;
}
*/

// print this triangle series pattern
/*  1 2 3 4
    1 2 3
    1 2
    1
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = n; i >= 1; i-- ) {
        for (j = 1; j <= i; j++) {
            cout << j << ' ';
        }        
        cout << endl;
    }

    return 0;
}