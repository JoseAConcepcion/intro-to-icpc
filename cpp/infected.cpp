#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    int lans = 0; int rans = 0;

    while (m>0)
    {
        if (rans < r)
        {
            rans++;
        } 
        else if (lans > l)
        {
            lans--;
        }
        m--;
    }

    cout << lans << " " << rans << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
