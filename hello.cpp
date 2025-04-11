#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cout << "Hola , Mundo! \n";
    vector<int> my_array = {40, 42, 45, 46, 28};
    sort(my_array.begin(), my_array.end());
    for (int i = 0; i < my_array.size(); i++)
    {
        cout << my_array[i] << " ";
    }

    cout << "\n";
    sort(my_array.begin(), my_array.end(), greater<int>());
    for (int i = 0; i < my_array.size(); i++)
    {
        cout << my_array[i] << " ";
    }

    cout << "\n";
    int arr[5] = {2, 8, 69, 75, 1};
    sort(arr, arr + 5);
    for (int i : arr)
    {
        cout << i << " ";
    }
    set<int> conj = {69, 80, 77, 82, 75, 81};

    for (auto it = conj.begin(); it != conj.end(); it++)
    {
        cout << *it << " ";
        cout << &(it) << " ";

    }
    cout << endl; // Salida: 69 75 77 80 81 82

    return 0;
}