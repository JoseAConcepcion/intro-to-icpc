#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, w;
    cin >> n >> w;
    
    vector<tuple<int, int, int>> waves;
    
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        
        if (command == "!") {
            int p, l, a;
            cin >> p >> l >> a;
            waves.emplace_back(p, l, a);
        } else if (command == "?") {
            int p;
            cin >> p;
            long long sum = 0;
            for (const auto& wave : waves) {
                int start = get<0>(wave);
                int len = get<1>(wave);
                int a = get<2>(wave);
                if (p < start || p > start + len - 1) {
                    continue;
                }
                int offset = p - start;
                int mod = offset % 4;
                if (mod == 0) {
                    sum += a;
                } else if (mod == 2) {
                    sum -= a;
                }
            }
            cout << sum << '\n';
        }
    }
    
}
int main() {
    solve();
}
