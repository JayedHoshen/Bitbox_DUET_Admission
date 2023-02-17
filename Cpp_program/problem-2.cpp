/*// Swapping in two number
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n1, n2, temp;

    cout << "Enter two numbers = ";
    cin >> n1 >> n2;

    temp = n2;
    n2 = n1;
    n1 = temp;

    cout << "After swapping--------\n " << "a = " << n1 << ", b = " << n2;

    return 0;
}*/

// swapping without temp variable
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n1, n2;
    
    cout << "Enter two number = ";
    cin >> n1 >> n2;

    n2 = n2+n1-(n1=n2);

    cout << "After swapping--------\n " << "a = " << n1 << ", b = " << n2;
    
    return 0;
}