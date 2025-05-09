#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> dp(n, 0);
    unordered_map<int, int> first_occurrence;
    unordered_map<int, int> best;

    for (int i = 0; i < n; ++i) {
        int color = a[i];
        if (first_occurrence.find(color) == first_occurrence.end()) {
            first_occurrence[color] = i;
            best[color] = (i > 0 ? dp[i-1] : 0) - i;
        } else {
            int current_best = best[color] + i + 1;
            dp[i] = max(dp[i], current_best);
            best[color] = max(best[color], (i > 0 ? dp[i-1] : 0) - i);
        }
        if (i > 0) {
            dp[i] = max(dp[i], dp[i-1]);
        }
    }

    cout << dp[n-1] << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
