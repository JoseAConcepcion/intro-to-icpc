#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    int a;
    int b;
    int c = 0;
    int result = 0;
    map<int, vector<pair<int,int>>> multi;
    map<int, int> count;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        multi[a].push_back({b,i});
    }

    for (auto& entry : multi) {
        sort(entry.second.begin(), entry.second.end(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
            return p1.first > p2.first; 
        });
    }
    while (!multi.empty())
    {
        for (int j = 1; j <= n; j ++) 
        {
            for (int k = 0; k < multi[j].size(); k++)
            {
                result += multi[j][k].first;
                if (!multi[j].empty())
                {
                    multi[j].erase(multi[j].begin());
                }
                count[j]++;
                c++;
                auto it = multi.find(c);
                if (it != multi.end())
                {
                    multi.erase(it);
                    c = c - count[c];
                    break;
                }
            }
        }    
    }
    cout << result;
    
}
int main(){
    int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}