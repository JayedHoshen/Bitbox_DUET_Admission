
/*
// 1-2*2+3*3-4*4...............n*n = ? using flag variable
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
        flag*=-1;
    }
    cout << "Summition is = " << sum;

    return 0;
}


// 1-1/2+1/3-1/4...............1/n = ? using flag variable
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, flag = 1;
    double sum = 0;

    cout <<"Enter value of n = ";
    cin >> n;

    for (i = 1; i<=n; i+=1){
        sum += (flag*1.0/i*i);
        flag*=-1;
    }
    cout << "Summition is = " << sum;

    return 0;
}


// 1-9+25-49...............n*n = ? using flag variable
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, flag = 1, sum = 0;

    cout <<"Enter value of n = ";
    cin >> n;

    for (i = 1; i<=n; i+=2){
        sum += flag*i*i;
        flag*=-1;
    }
    cout << "Summition is = " << sum;

    return 0;
}

// 1-2+6-24...............n! = ? using flag variable
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, fact = 1, flag = 1, sum = 0;

    cout <<"Enter value of n = ";
    cin >> n;

    for (i = 1; i<=n; i+=1){
        fact *= i;
        sum += flag*fact;
        flag*=-1;
    }
    cout << "Summition is = " << sum;

    return 0;
}
*/

// 1-1/2*2+1/3*3-1/4*4...............1/n*n = ?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, c;
    double sum = 0;

    cout <<"Enter value of n = ";
    cin >> n;

    for (i = 1, c = 1; i<=n; i+=1, c++){
        if(c%2==0) sum -= 1.0/(i*i);
        else sum += 1.0/(i*i);
    }
    cout << "Summition is = " << sum;

    return 0;
}