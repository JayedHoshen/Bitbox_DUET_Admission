//smallest/largest 3 number using conditional operator
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c; 

    cout << "Enter three number = ";
    cin >> a >> b >> c; 

    (a>b&&a>c)? cout << "Large number = " << a : (b>c)? cout << "Large number = " << b : cout << "Large number = " << c;

    return 0;
}
/*
//smallest/largest 3 number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter three numbers = ";
    cin >> a >> b >> c;

    if (a>b && a>c) cout << "Large number = " << a;
    else if (b>c) cout << "Large number = " << b; 
    else cout << "Large number = " << c; 

    // update & max
    double max = a;
    
    if (b>max) max = b; 
    if (c>max) max = c;

    cout << "Large number = " << max << endl;
    


    return 0;
}*/