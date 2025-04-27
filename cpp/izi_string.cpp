#include <bits/stdc++.h>
using namespace std;


void solve()
{
    string a, b;
    char la, lb;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        la = tolower(a[i]);
        lb = tolower(b[i]);
        if (la == lb) {
            continue;
        }
        else if (la > lb)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << 0 << endl;
}


int main()
{
    solve();
    return 0;
}