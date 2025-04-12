#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    map<int, int> mp;
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    vector<int> result;
    for( auto x : mp){
        if(x.second >= k)
        {
            result.push_back(x.first);
        }
    }
    if (result.size() == 0)
    {
        cout << -1 << endl;
        return;
    }

    sort(result.begin(), result.end());
    int l, laux, r, c;
    l = result[0]; 
    r = result[0];
    laux = result[0]; 
    int max = 0;

    for (int j = 1; j < result.size(); j++){
        if(result[j] == result[j-1] + 1)
        {
            if (result[j] - laux > max){
                max = result[j]-laux;
                r = result[j];
                l = laux;
            }
        }
        else{
            laux = result[j];
        }
    }
    cout << l << " " << r << endl;
};

int main(){
    int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}