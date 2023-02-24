/*
// Calculate Factorial using recursive function
#include <bits/stdc++.h>
using namespace std;

int fact(int num);

int main() 
{
    int n, Fact;

    cout << "Enter any integer number = ";
    cin >> n;

    Fact = fact(n);
    cout << "Factorial = " << Fact;

    return 0;
}

int fact(int n) {
    if (n==0) return 1;
    else return fact(n-1) * n;
}
*/
/*
// 1+2+3+...........n = ? using recursive function
#include <bits/stdc++.h>
using namespace std;

int sumFunc(int num);

int main() 
{
    int n, sum;

    cout << "Enter last value (n) = ";
    cin >> n;

    sum = sumFunc(n);
    cout << "Summition = " << sum;

    return  0;
}

int sumFunc(int n){
    if (n==0) return 0;
    else return (n + sumFunc(n-1));
}
*/
/*
// power function implementation using recrustive function
#include <bits/stdc++.h>
using namespace std;

int powerFunc(int x, int p);

int main()
{
    int a, n, pow;

    cout << "Enter base & exponent = ";
    cin >> a >> n;

    pow = powerFunc(a, n);
    cout << a << "^" << n << " = " << pow << endl;

    return 0;
}

int powerFunc(int x, int p){
    if (p==0) return 1;
    else return powerFunc(x, p-1) * x;
}
*/
/*
// 1+1/2*2+1/3*3+...........1/n*n = ? using recursive function
#include <bits/stdc++.h>
using namespace std;

double sumFunc(int num);

int main() 
{
    int n;
    double sum;

    cout << "Enter last value (n) = ";
    cin >> n;

    sum = sumFunc(n);
    cout << "Summition = " << sum;

    return  0;
}

double sumFunc(int n){
    if (n==0) return 0;
    else return sumFunc(n-1) + 1.0/(n*n);
}
*/
/*
// 1+1/2!+1/3!+...........1/n! = ? using recursive function
#include <bits/stdc++.h>
using namespace std;

int fact(int num);
double sumFunc(int num);

int main() 
{
    int n;
    double sum;

    cout << "Enter last value (n) = ";
    cin >> n;

    sum = sumFunc(n);
    cout << "Summition = " << sum;

    return  0;
}

double sumFunc(int n){
    int Fact = fact(n);
    if (n==0) return 0;
    else return (sumFunc(n-1) + 1.0/Fact);
}

int fact(int n) {
    if (n==0) return 1;
    else return fact(n-1) * n;
}
*/
// 1-2+3-4...........n = ? using recursive function
#include <bits/stdc++.h>
using namespace std;

int sumFunc(int num);

int main() 
{
    int n, sum;

    cout << "Enter last value (n) = ";
    cin >> n;

    sum = sumFunc(n);
    cout << "Summition = " << sum;

    return  0;
}

int sumFunc(int n){
    if (n==0) return 0;
    else if(n%2==0) return (sumFunc(n-1) - n);
    else  return (sumFunc(n-1) + n);
}
