// 1 to n number print
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter value of n = ";
    cin >> n;

    cout <<"Simple seris: ";
    for (i = 1; i <= n; i++) {
        cout << i << " ";
    }
    
    cout <<"\nOdd seris: ";
    for (i = 1; i <= n; i+=2) {
        cout << i << " ";
    }

    cout <<"\nEven seris: ";
    for (i = 2; i <= n; i+=2) {
        cout << i << " ";
    }

    return 0;
}