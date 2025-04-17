#include <bits/stdc++.h>
using namespace std;

void solve(int& x)
{
    string comand;
    cin >> comand;
    for (int i = 0; i < 3; i++)
    {
        if (comand[i] == 'X')
        {
            comand.erase(i, 1);
            break;
        }
    }
    if (comand == "--")
    {
        x--;
    }
    else
    {
        x++;
    }

}
int main(){
    int t;
	cin >> t;
    int x = 0;
	while(t--)
	{
		solve(x);
	}
    cout << x << endl;
}