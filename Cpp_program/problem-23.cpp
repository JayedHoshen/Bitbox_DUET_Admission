// print all prime number between 1 to n using flag variable
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, count = 0;

    cout << "Enter value of n = ";
    cin >> n; 

    for (i = 2; i <= n; i++ ){
        bool f = 0;

        for (j = 2; j <= i-1; j++) {
            if (i % j == 0) {
                f = 1;
                break;
            }
        }
        if (f == 0) count++;
    }

    cout << "1 to " << n << " total prime number is = " << count << endl;
    
    return 0;
}

/*
// print all prime number between 1 to n using flag variable
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;

    cout << "Enter value of n = ";
    cin >> n; 

    cout << "1 to " << n << " prime number is ---- \n";
    for (i = 2; i <= n; i++ ){
        bool f = 0;

        for (j = 2; j <= i-1; j++) {
            if (i % j == 0) {
                f = 1;
                break;
            }
        }
        if (f == 0) cout << i << "  ";
    }

    return 0;
}
*/