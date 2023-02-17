// 1-2*2-3*3+4*4+5*5-...............n*n = ?
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
        if(i%2) flag*=-1;
    }
    cout << "Summition is = " << sum;

    return 0;
}



/*
// 1-2*2+3*3-4*4...............n*n = ?
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


// 1-1/2+1/3-1/4...............1/n = ?
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


// 1-9+25-49...............n*n = ?
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

// 1-2+6-24...............n! = ?
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