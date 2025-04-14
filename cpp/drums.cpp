#include <bits/stdc++.h>
using namespace std;

void solve(string a, string b)
{
    if (a[0] != b[0])
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] = b[i])
        {
            continue;
        }
        else
        {
            for (int j = i; j < b.length(); j++)
            {
                if(a[i] == b[j])
                {
                    if (j>2*i)
                    {
                        cout << "NO" << endl;
                        return;
                    }
                    solve(a.substr(i, a.length()), b.substr(j-1, b.length()));
                    return;
                }
            }
            
        }
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
