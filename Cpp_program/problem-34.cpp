/*
// 1+(1+2)+(1+2+3)+(1+2+3+4)+........(1+2+3++.....n) = ?
// 1+3+6+10+..........n = ?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, sum = 0;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        //sum += (i * (i+1) / 2); 
        for (j = 1; j <= i; j++) sum += j;
    }

    cout << "Summition is = " << sum << endl;
    
    return 0;
}
*/

// 1*3+2*5+3*7+......n(2n+1);
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++) sum += i*(2*i+1);
    cout << "Summition is = " << sum << endl;

    return 0;
}
