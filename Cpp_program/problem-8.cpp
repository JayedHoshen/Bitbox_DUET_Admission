 // Even/odd number 
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n; 

    cout << "Enter any integer number = ";
    cin >> n;

    if (n%2 == 0) cout << "Even number.\n"; // if(n%2)cout<<"Odd.\n";
    else cout << "Odd number.\n";

    /*
        if (n&1) cout << "Odd.\n";
        else cout << "Even.\n";
    */


    return 0;
}