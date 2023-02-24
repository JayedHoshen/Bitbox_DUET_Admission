// print this binary pattern
/*  1
    1 0
    1 0 1
    1 0 1 0
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++ ) {
        for (j = 1; j <= i; j++) {
            cout << (j%2);
        }        
        cout << endl;
    }

    return 0;
}
*/
// print this binary pattern
/*  #
    # *
    # * #
    # * # *
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++ ) {
        for (j = 1; j <= i; j++) {
            if (j%2==0) cout << "* ";
            else cout << "# ";
        }        
        cout << endl;
    }

    return 0;
}
*/

// print this binary pattern
/*  1
    0 1
    1 0 1
    0 1 0 1
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++ ) {
        for (j = i; j >= 1; j--) {
            cout << (j%2);
        }        
        cout << endl;
    }

    return 0;
}
*/
// print this binary pattern
/*  *
    # *
    * # *
    # * # *
*/
/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++ ) {
        for (j = i; j >= 1; j--) {
            if (j%2==0) cout << "# ";
            else cout << "* ";
        }        
        cout << endl;
    }

    return 0;
}
*/
// print this binary pattern
/*  AA
    BB AA
    AA BB AA
    BB AA BB AA
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;

    cout << "Enter value of n = ";
    cin >> n;

    for (i = 1; i <= n; i++ ) {
        for (j = i; j >= 1; j--) {
            if (j%2==0) cout << "BB ";
            else cout << "AA ";
        }        
        cout << endl;
    }

    return 0;
}