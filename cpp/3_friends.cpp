#include <bits/stdc++.h>
using namespace std;

void solve(int& problems)
{
    int count = 0;
    int sure;
    for (int i = 0; i < 3; i++)
    {
        cin >> sure;
        count += sure;
    }
    if (count > 1)
    {
        problems += 1;
    }
}
int main(){
    int t;
	cin >> t;
    int problems = 0;
	while(t--)
	{
		solve(problems);
	}
    cout << problems << endl;
}