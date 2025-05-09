#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int q;
    cin >> q;
    vector<long long> query(3);

    for (int j = 0; j < q; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> query[i];
        }
        int len = query[1] - query[0];
        int move = query[2] % len;
        char temp = s[query[1]];
        for (int i = query[0]; i < query[1]; i++)
        {
            temp = s[query[i]+move-len];
            s[query[i]+move-len] = s[i];
        }
        
    }
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

