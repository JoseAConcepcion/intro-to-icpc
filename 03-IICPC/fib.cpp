#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
     
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 3;
    } 

    return (2*(n-1))*fib(n-2) + fib(n-1);
}

void solve()
{
    int n, moves;
    cin >> n;
    cin >> moves;
    int temp1, temp2;
    int table = n;
    for (int i = 0; i < moves; i++)
    {
        cin >> temp1, temp2;
        table -= (temp1 && temp2) ? 1 : 2;
    }

    cout << fib(table) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}

