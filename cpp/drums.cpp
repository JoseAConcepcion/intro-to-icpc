#include <bits/stdc++.h>
using namespace std;

void solve(string a, string b)
{
    vector<string> sets_a;
    vector<string> sets_b;
    char last;
    if (a.length() > b.length() || a[0] != b[0] || a.length() > 2 * b.length())
    {
        cout << "NO" << endl;
        return;
    }
    last = a[0];
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            if (a[i] == last)
            {
                cout << "NO" << endl;
                return;
            }
            for (int j = i; j < b.length(); j++)
            {
                if(a[i] == b[j])
                {
                    if (j>2*i)
                    {
                        cout << "NO" << endl;
                        return;
                    }
                    string sub_a = a .substr(i, a.length());
                    string sub_b = b .substr(j, b.length());
                    last = sub_a[0];
                    solve(sub_a, sub_b);
                    return;
                }
            }
        }
    }
    if (a.length() < b.length())
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    return;
}


int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        solve(a, b);
    }
}
