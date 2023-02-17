// area of indivitual part
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, r, area;

    cout << "Enter value of a = ";
    cin >> a;

    r = a / 2;
    area = (a*a) - (3.1416*r*r);

    cout << "Area is = " << area << endl;

    return 0;
}