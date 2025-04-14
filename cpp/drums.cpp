#include <bits/stdc++.h>
using namespace std;

void solve(string a, string b)
{
    vector<int> sets_a;
    vector<int> sets_b;
    int count = 1;
    if (a.length() > b.length() || a[0] != b[0] || a.length() > 2 * b.length())
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i < a.length(); i++)
    {
        if (a[i] != a[i-1])
        {
            sets_a.push_back(count);
            count = 1;
            continue;
        }
        count++;
    }

    sets_a.push_back(count);
    count = 1;

    for (int i = 1; i < b.length(); i++)
    {
        if (b[i] != b[i-1])
        {
            sets_b.push_back(count);
            count = 1;
            continue;
        }
        count++;
    }

    sets_b.push_back(count);

    if (sets_a.size() != sets_b.size())
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < sets_a.size(); i++)
    {
        if (sets_b[i] > 2*sets_a[i] || sets_a[i] > sets_b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
