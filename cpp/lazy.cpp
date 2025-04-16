#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string word;
    cin >> word;
    if (word.length() <= 10)
    {
        cout << word << endl;
    }
    else
    {
        cout << word[0] << word.length()-2 << word[word.length()-1] << endl;
    }
}


int main(){
    int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
}