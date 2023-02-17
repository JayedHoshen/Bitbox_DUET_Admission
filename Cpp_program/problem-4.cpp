// Area of triangle
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c, s, A;

    cout << "Enter three side of triangle = ";
    cin >> a >> b >> c;

    if ((a+b>c) && (b+c>a) && (c+a>b)) {
        s = (a+b+c) / 2;
        A = sqrt(s*(s-a)*(s-b)*(s-c));

        cout << "Area of triangle is = " << A << endl;
    }
    else {
        cout << "Triangle is not valid!"<< endl;
    }

    return 0;
}