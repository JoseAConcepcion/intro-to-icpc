#include <bits/stdc++.h>
using namespace std;

void solve(multiset<int> ms, int n, int k) {
        int l, r; 
        int max_l=0;
        int max_r=0;
        int c = 0;
        int max_c = -1;
        int last_printed = -1;
        vector<int> arr;
        bool sol = 0;
        for (auto x : ms){
            if ( x == last_printed){
                continue;
            }
            arr.push_back(x);
            last_printed = x;
        }
        last_printed = -1;
        for (size_t i = 0; i < arr.size(); ++i) {
            int x = arr[i];
            if (ms.count(x) >= k && (i == 0 || (x - arr[i - 1] <= 1))) {
                if (c == 0){
                    l = x;
                }
                r = x;
                c++;
                last_printed = x;
                sol = 1;
                continue;
            }
            else{
                if (c > max_c){
                    max_l = l;
                    max_r = r;
                    max_c = c;
                }
                c = 0;
            }
        }
        if (!sol) {
            cout << "-1";
            cout << endl;
            return;
        }
        if (c > max_c){
            max_l = l;
            max_r = r;
        }
        cout << max_l << " " << max_r;
        cout << endl;
    };

int main(){
    int i;
    int n,k,a;
    cin >> i;
    while (i != 0)
    {
        cin >> n;
        cin >> k;
        multiset<int> ms;
        for (int j = 0; j < n; j++) {
            cin >> a;
            ms.insert(a);
        }
        solve(ms, n, k);
        i--;
    }

    return 0;
}