// sum of four numbers
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n1, n2, n3, n4, sum;

    cout << "Enter four numbers = ";
    cin >> n1 >> n2 >> n3 >> n4;

    sum = n1+n2+n3+n4;

    cout << "Summition of four numbers is = " << sum << endl;

    return 0;
}

/*
// using only two variable
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n1, n2;
    
    cout << "Enter two number = ";
    cin >> n1 >> n2;
    n1 += n2;

    cout << "Enter a number = ";
    cin >> n2;
    n1 += n2;

    cout << "Enter a number = ";
    cin >> n2;
    n1 += n2;

    cout << "Summition of four number is = " << n1 << endl;

    return 0;
}*/