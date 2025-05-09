#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <string>
#include <cstring>
#include <cstdio>
#include <climits>
#include <cassert>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

// Common macros
#define ll long long
#define ull unsigned long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)

ll const mod = 1e9 + 7;

// using namespace __gnu_pbds;

// typedef tree<
//     int,                                   // Key type
//     null_type,                             // Mapped type (null_type for set)
//     less<int>,                             // Comparator
//     rb_tree_tag,                           // Tree type (rb_tree_tag for Red-Black tree)
//     tree_order_statistics_node_update      // Policy for order statistics
// > ordered_set;

// Fast I/O
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// Utility functions
template <typename T>
void print_vector(const vector<T> &v)
{
    for (const T &x : v)
    {
        cout << x << " ";
    }
    cout << "\n";
}

template <typename T>
void print_pair(const pair<T, T> &p)
{
    cout << "(" << p.first << ", " << p.second << ")\n";
}

int compareBySecond(const pair<ll, int> &a, const pair<ll, int> b)
{
    return a.S < b.S;
}

ll solve(int n, ll solutions[])
{
    if (solutions[n] != -1)
    {
        return solutions[n];
    }

    return (n * solve(n - 1, solutions) + (n * n - n) * solve(n - 2, solutions)) % mod;
}
// Main function
int main()
{
    fast_io();

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;

            n -= (x == y) ? 1 : 2;
        }

        ll solutions[n + 1];

        for (int i = 0; i <= n; i++)
        {
            solutions[i] = -1;
        }

        cout << solve(n, solutions) << "\n";
    }

    return 0;
}