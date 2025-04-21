#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, H;
	cin >> n;
	cin >> H;
    vector<long long> numbers(3);
    long long l , w, h;
    long long max = 0;
    long long min = 0;
    long long secondMax = 0;
    long long width = 0;


    for (int i = 0; i < n; i++)
    {
        cin >> l;
        cin >> w;
        cin >> h;

        numbers[0] = l;
        numbers[1] = w;
        numbers[2] = h;


        sort(numbers.begin(), numbers.end());

        int min = numbers[0];
        int secondMax = numbers[1];
        int max = numbers[2];

        if (H < min)
        {
            cout << "impossible" << endl;
            return;
        }
        if (H >= max)
        {
            width += min;
            continue;
        }
        else if (H >= secondMax)
        {
            width += min;
            continue;
        }
        else
        {
            width += secondMax;
        }
    }

    cout << width << endl;
    
}
int main(){
    solve();
}
