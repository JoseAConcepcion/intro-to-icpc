#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, q, type, number;
    cin >> n >> q;
    vector<long long> array(n);

    long long sum = 0, cnt_even = 0, cnt_odd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        sum += array[i];
        if (array[i] % 2 == 0)
            cnt_even++;
        else
            cnt_odd++;
    }

    for (int j = 0; j < q; j++)
    {
        cin >> type >> number;
        if (type == 0)
        {
            sum += number * cnt_even;
            if (number % 2 != 0)
            {
                cnt_odd += cnt_even;
                cnt_even = 0;
            }
        }
        else
        {
            sum += number * cnt_odd;
            if (number % 2 != 0)
            {
                cnt_even += cnt_odd;
                cnt_odd = 0;
            }
        }
        cout << sum << endl;
    }
    return;
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
