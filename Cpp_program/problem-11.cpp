// calculate Quadratic equation 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, D, r1, r2;

    cout << "Enter value of (a,b,c) = ";
    cin >> a >> b >> c; 

    D = b * b - 4 * a * c; 

    if (D<0) cout << "Complex Roots!\n";
    else {
        r1 = (-b+sqrt(D)) / (2*a);
        r2 = (-b-sqrt(D)) / (2*a);

        cout << "Root-1 = " << r1 << endl;
        cout << "Root-2 = " << r2 << endl;
    }

    return 0;
}