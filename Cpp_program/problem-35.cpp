// print this triangle series pattern
/*  1
    1 2
    1 2 3
    1 2 3 4
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
        for (j = 1; j <= i; j++) {
            cout << j << ' ';
        }        
        cout << endl;
    }

    return 0;
}
*/
// print this triangle series pattern
/*
    1
    2 3
    4 5 6
    7 8 9 10
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, sum = 0;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++ ) {
        for (j = 1; j <= i; j++) {
            sum++;
            cout << sum << ' ';
        }        
        cout << endl;
    }

    return 0;
}