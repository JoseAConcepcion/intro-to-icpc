
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long max = 0;
    long long aux = 0;
    long long n;
    cin >> n;
    long long numbers[n];

    for (int i =0; i < n; i++)
    {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            aux += numbers[i] ^ numbers [j];
        }
        if (aux > max)
        {
            max = aux;
        }
        aux = 0;
    }
    
    cout << max << endl;
}



int main(){
    int t;
    cin >> t;
    while(t--)
    {
        solve();        
    }
}
