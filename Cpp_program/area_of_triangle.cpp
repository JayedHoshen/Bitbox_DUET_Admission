// Area of genaral trialgle 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double b, h, A;

    cout << "Enter base and height = ";
    cin >> b >> h;

    A = 0.5 * b * h;

    cout << "Area of triangle is = " << A;

    return 0;
}



/* Area of common triangle (a,b,c)
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    double a, b, c, s, A;

    cout << "Enter value of a, b, c = ";
    cin >> a >> b >> c;

    if ((a+b>c) && (b+c>a) && (c+a>b)) {
        s = (a+b+c) / 2;
        A = sqrt(s*(s-a)*(s-b)*(s-c));

        cout << "Area of triangle is = " << A << endl;
    }else {
        cout << "Triangle not possible! \n Please check your input value.";
    }

    return 0;
}*/