// Given 4 side & 1 korno, calculate Area of Rectangle
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, d, x, s, area1, area2;

    cout << "Enter 4 side of rectangle & value of korno = ";
    cin >> a >> b >> c >> d >> x;

    if ((a+b+c>d) && (a+b+d>c) && (a+c+d>b) && (b+c+d>a)) {
        s = (b+c+x) / 2;
        area1 = sqrt(s*(s-b)*(s-c)*(s-x));

        s = (a+d+x) / 2;
        area2 = sqrt(s*(s-a)*(s-d)*(s-x));

        cout << "Area of Rectangle is = " << (area1+area2) << endl;
    }
    else cout << "Area of rectangle is not possible, try again." << endl;

    return 0;
}