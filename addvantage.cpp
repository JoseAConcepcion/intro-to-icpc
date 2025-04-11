#include <bits/stdc++.h>
using namespace std;

void solve(int* arr, int size) {
        vector<int> original(arr, arr + size);
        vector<int> sorted(arr, arr + size);

        sort(sorted.begin(), sorted.end());

        for (int i = 0; i < size; i++) {
            if (original[i] == sorted[size-1])
                cout << original[i] - sorted[size - 2] << " "; 
            else{
                cout << original[i] - sorted[size - 1] << " "; 
            }
        }
        cout << endl;
    };

int main(){
    

    int i;
    int n;
    cin >> i;
    while (i != 0)
    {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        solve(arr, n);
        i--;
    }

    return 0;
}