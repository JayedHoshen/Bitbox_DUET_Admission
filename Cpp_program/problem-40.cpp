/*
// fibonacci series print
#include <bits/stdc++.h>
using namespace std;

void fibo (int n);

int main()
{
    int num;

    cout << "Enter nth position = ";
    cin >> num;

    cout << "Fibonacci series = ";
    fibo(num);

    return 0;
}
void fibo (int n) {
    int i, x = 0, y = 1, z;
    for (i = 1; i <= n; i++) {
        cout << x << ' ';
        z = x + y;
        x = y;
        y = z;
    }
}
*/

// fibonacci series using recursive function
#include <bits/stdc++.h>
using namespace std;

int fibo(int num);

int main()
{
    int n, i;

    cout << "Enter value of n = ";
    cin >> n;

    cout << "Fibonacci series = ";
    for (i = 1; i <= n; i++) {
        cout << fibo(i) << " ";
    }

    return 0;
}

int fibo(int n) {
    if (n==1)return 0;
    else if (n==2)return 1;
    else return fibo(n-1) + fibo(n-2);
}