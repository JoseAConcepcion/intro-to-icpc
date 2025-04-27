#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    int result;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> n;
            if (n)
            {
                int imove = abs(i-2); 
                int jmove = abs(j-2); 
                result = imove + jmove;
            }
        }
    }
    cout << result << endl;
}


int main()
{
    solve();
    return 0;
}