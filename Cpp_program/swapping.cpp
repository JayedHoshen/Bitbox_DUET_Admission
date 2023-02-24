// Two number swapping (temp, without temp)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* // using temp. variable
    double a, b, c;
    cout << "Enter two number = ";
    cin >> a >> b;
    cout << "Your number is = " << "a = " << a << ", " << "b = " << b;
    c = b;
    b = a;
    a = c;
    cout << "\nAfter Swapping----\n" << "a = " << a << ", " << "b = " << b;
    */

    // without temp. variable (short-hand)
    double a, b;
    cout << "Enter two number = ";
    cin >> a >> b;
    cout << "Your number is = " << "a = " << a << ", " << "b = " << b;
    a = a + b - (b = a);
    cout << "\nAfter Swapping----\n" << "a = " << a << ", " << "b = " << b;

    return 0;
}