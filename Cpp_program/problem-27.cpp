// 1-2*2-3*3+4*4+5*5-...............n*n = ?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, flag = 1;
    double sum = 0;

    cout <<"Enter value of n = ";
    cin >> n;

    for (i = 1; i<=n; i+=1){
        sum += (flag*i*i);
        if(i%2) flag*=-1;
    }
    cout << "Summition is = " << sum;

    return 0;
}


