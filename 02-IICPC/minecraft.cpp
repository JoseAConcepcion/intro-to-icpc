#include <bits/stdc++.h>
using namespace std;

long long merge_count(vector<long long>& a, int l, int r, vector<long long>& tmp) {
    if (r - l <= 1) return 0;
    int m = (l + r) / 2;
    long long inv = 0;
    inv += merge_count(a, l, m, tmp);
    inv += merge_count(a, m, r, tmp);

    int i = l, j = m, k = l;
    while (i < m || j < r) {
        if (j == r || (i < m && a[i] <= a[j])) {
            tmp[k++] = a[i++];
        } else {
            inv += (m - i);
            tmp[k++] = a[j++];
        }
    }

    for (int x = l; x < r; x++) 
        a[x] = tmp[x];
    return inv;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> cubes(n), tmp(n);
    for (int i = 0; i < n; i++)
        cin >> cubes[i];

    long long inv = merge_count(cubes, 0, n, tmp);
    long long max_swaps = 1LL * n * (n - 1) / 2;
    if (inv <= max_swaps - 1)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
        
}

int main(){

    int t;
    cin >> t;
    while (t--) 
    {
        solve();
    }
    return 0;
}
