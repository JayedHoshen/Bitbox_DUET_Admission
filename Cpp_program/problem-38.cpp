// some function implementation 
/*
// to calculate factorial
#include <bits/stdc++.h>
using namespace std;

int fact(int num);

int main()
{
    int n;

    cout << "Enter any positive number = ";
    cin >> n;

    cout << "Factorial = " << fact(n) << endl;

    return 0;
}

int fact(int n) {
    int fact = 1, i;

    for (i = 1; i<=n; i++) fact *= i;

    return fact;
}
*/
/*
// power function implementation
#include <bits/stdc++.h>
using namespace std;

int power_func(int n, int p);

int main() 
{
    int n, p, sqrt;

    cout << "Enter base & exponent (n^p) = " ;
    cin >> n >> p;
    
    sqrt = power_func(n, p);

    cout << "Square root = " << sqrt << endl;

    return 0;
}

int power_func(int n, int p) {
    int i, powr = 1;

    for (i = 1; i<=p; i++) powr *= n;

    return powr;
}
*/
/*
// 1-2+6-24+120...............n! = ?
#include <bits/stdc++.h>
using namespace std;

int mySeries(int num);

int main()
{
    int n, s;

    cout <<"Enter value of n = ";
    cin >> n;

    s = mySeries(n);

    cout << "Summition is = " << s << endl;

    return 0;
}

int mySeries(int n) {
    int i, fact = 1, flag = 1, sum = 0;

    for (i = 1; i<=n; i++) {
        fact *= i;
        sum += flag*fact;
        flag *= -1;
    }

    return sum;
}
*/

// 1-1/2*2+1/3*3-1/4*4...............1/n*n = ?
#include <bits/stdc++.h>
using namespace std;

double mySeries(int num);

int main()
{
    int n;
    double s;

    cout <<"Enter value of n = ";
    cin >> n;

    s = mySeries(n);

    cout << "Summition is = " << s << endl;

    return 0;
}

double mySeries(int n) {
    int i, flag = 1;
    double sum = 0;

    for (i = 1; i<=n; i++) {
        sum += (flag*1.0/(i*i));
        flag *= -1;
    }

    return sum;
}