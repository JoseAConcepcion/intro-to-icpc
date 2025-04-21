#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k, number, aux;
	cin >> n >> k;
    int count = 0;

    while (count < k)
    {
        cin >> number;
        if (number < 1 )
        {
            cout << count << endl;
            return;
        }
        count++;
    }
    
    for (int i = count; i < n; i++)
    {
        cin >> aux;
        if (aux != number)
        {
            cout << count << endl;
            return;
        }
        count++;
    }

    cout << count << endl;
}
int main(){
    solve();
}
