#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin >> n;
    long long numbers[n];
    long long count[30] = {0}; 
    long long max = 0;
    long long aux = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 30; j++) {
            if (numbers[i] & (1 << j)) {
                count[j]++; 
            } 
        } 
    } 

    for (int k = 0; k < n; k++) {
        long long  XORsum = 0;
        long long a_k = numbers[k]; 

        for (int i = 0; i < 30; ++i) {
            if (!(a_k & (1 << i))) {
                XORsum += count[i] * (1 << i);
            } else {
                XORsum += (n - count[i]) * (1 << i);
            }
        }
        if (XORsum > max)
        {
            max = XORsum;
        }
    }

    cout << max << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        solve();        
    }
}
