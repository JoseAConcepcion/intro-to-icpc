#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, stack<int>& results) {
    if (b == a) {
        cout << "YES" << endl;
        cout << results.size() << endl;
        while (!results.empty()) {
            cout << results.top() << " ";
            results.pop();
        }
        cout << endl;
        return;
    }

    if (b < a) {
        cout << "NO" << endl;
        return;
    }

    if (b % 2 == 0) {
        results.push(b / 2);
        solve(a, b / 2, results);
    }
    else if (b % 10 == 1) {
        int new_b = b / 10;
        results.push(new_b); 
        solve(a, new_b, results);
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    int a;
    int b;
    stack<int> my_stack; 
    cin >> a >> b;
    my_stack.push(b);
    solve(a, b, my_stack);
    return 0;
}
