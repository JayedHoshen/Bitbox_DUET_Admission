// compare tow numbers (largest or smallest)
#include <bits/stdc++.h>
using namespace std;

int main(){
    double n1, n2;

    cout << "Enter two numbers = ";
    cin >> n1 >> n2;

    if (n1 > n2) {
        cout << "n1 is largest number.";
    }
    else if (n1 < n2) {
        cout << "n2 is largest number.";
    }
    else {
        cout << "n1 and n2 are equal!";
    }

    return 0;
}