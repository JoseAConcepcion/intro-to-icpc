#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    int pass[2*n];
    int total = ((2*n)*(2*n+1))/2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
            pass[i+j] = matrix[i][j];
        }
    }
    
    for (int i = 0; i < 2*n-1; i++)
    {
        total = total - pass[i];
    }
    cout << total << " ";

    for (int i = 0; i < 2*n-1; i++)
    {
        total = total - pass[i];
        cout << pass[i] << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
