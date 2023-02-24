// sum of digis of a number & count of digits of a number
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int i, n, sum = 0, count = 0;

    cout << "Enter an integer number = ";
    cin >> n;

    for (i = n; i > 0; i/=10) {
        sum += (i%10);
        count++;
    }
    cout << "Total number of digits = " << count << endl;
    cout << "Sum of digits is = " << sum << endl;

    return 0;
}