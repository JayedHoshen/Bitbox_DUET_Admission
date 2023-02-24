/*
// 1*2*3*4*........n = ?
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n, i, result = 1;

    cout << "Enter last number (n) = ";
    cin >> n;

    for (i = 1; i <=n; i+=1) result *= i;

    cout << "Total = " << result << endl;

    return 0;
}
*/

// 1^3*3^3*4^3*........n^3 = ?
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n, i, result = 1;

    cout << "Enter last number (n) = ";
    cin >> n;

    for (i = 1; i <=n; i+=2) result *= (i*i*i);

    cout << "Total = " << result << endl;

    return 0;
}