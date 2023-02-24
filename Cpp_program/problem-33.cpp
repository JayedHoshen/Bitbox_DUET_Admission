/*
// claculate GCD & LCM
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i, a, b, min, gcd, lcm;

    cout << "Enter two numbers = ";
    cin >> a >> b;

    if (a<b) min = a;
    else min = b;

    if (min == 0) gcd = a+b;
    else {
        for (i = min; i >= 1; i--) {
            if (a%i==0 && b%i==0) {
                gcd = i;
                break;
            }
        }
    }

    lcm = (a*b) / gcd;

    cout << "GCD is = " << gcd << endl;
    cout << "LCM is = " << lcm << endl;

    return 0;
}
*/

// claculate GCD & LCM using Uclid algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t, n1, n2, gcd, lcm;
    
    cout << "Enter two numbers = ";
    cin >> a >> b;
    
    n1 = a;
    n2 = b;

    if (a == 0) gcd = a;
    else if (b == 0) gcd = b;
    else {
        while (b!=0)
        {
            t = a % b;
            a = b;
            b = t;
        }
        
    }
    gcd = a;
    lcm = (n1*n2) / gcd;

    cout << "GCD is = " << gcd << endl;
    cout << "LCM is = " << lcm << endl;

    return 0;
}