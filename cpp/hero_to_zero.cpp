#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    long long count = 0;
    cin >> n >> k;
    if (k > n)
    {
        cout << n << endl;
        return;
    }
    while (n != 0)
    {
        long long module = n % k;
        if (module == 0)
        {
            n = n / k;
            count++;
            continue;
        }
        n = n - module;
        count += module;
    }
    cout << count << endl;
    
}
int main(){
    int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}