/*
// sum of 1 to nth with O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter value of n = ";
    cin >> n;

    n = n * (n+1)/2;

    cout << "Summition is = " << n << endl;
    
    return 0;
}
*/
/*
// sum of 1+3+5+......nth with O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter value of n = ";
    cin >> n;

    n = (n+1) / 2;
    n = n * n ;

    cout << "Summition is = " << n << endl;
    
    return 0;
}
*/

// sum of 2+4+6+......nth with O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter value of n = ";
    cin >> n;

    n = n / 2;
    n *= (n+1);

    cout << "Summition is = " << n << endl;
    
    return 0;
}

