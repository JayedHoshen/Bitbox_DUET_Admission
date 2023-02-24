// 1+1/2*2+1/3*3+1/4*4...............1/n*n = ?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    double sum = 0;

    cout <<"Enter value of n = ";
    cin >> n;

    for (i = 1; i<=n; i+=1){
        sum += 1.0/(i*i);
    }
    cout << "Summition is = " << sum;

    return 0;
}