#include <bits/stdc++.h>
using namespace std;

string rotate(string a, char b)
{
    string aux;
        if (b == 'h')
        {
            for (int i = a.length() - 1; i > -1; i--)
            {
                if(a[i] == 'q')
                {
                    aux.append("p");
                }
                if(a[i] == 'b')
                {
                    aux.append("d");
                }
                if(a[i] == 'p')
                {
                    aux.append("q");
                }
                if(a[i] == 'd')
                {
                    aux.append("b");
                }
            }
            return aux;
        }
        else if (b == 'v')
        {
            for (int i = 0; i < a.length(); i++)
            {
                if(a[i] == 'b')
                {
                    aux.append("p");
                }
                if(a[i] == 'p')
                {
                    aux.append("b");
                }
                if(a[i] == 'q')
                {
                    aux.append("d");
                }
                if(a[i] == 'd')
                {
                    aux.append("q");

                }
            }
            return aux;
        }
        else(b == 'r');
        {
            for (int i = a.length() - 1; i > -1; i--)
            {
                if(a[i] == 'b')
                {
                    aux.append("q");
                }
                if(a[i] == 'q')
                {
                    aux.append("b");
                }
                if(a[i] == 'd')
                {
                    aux.append("p");
                }
                if(a[i] == 'p')
                {
                    aux.append("d");
                }
            }
            return aux;
        }

}
void solve()
{
    string a, b;
	cin >> a;
	cin >> b;
    for (int i = 0; i < b.length(); i++)
    {
        cout << i << "arriba" << endl;
        if ((i < b.length() - 1) && b[i] == b[i+1]) {
            i++;
            cout << i << "abajo" << endl;
            continue;
        }
        a = rotate(a, b[i]);
    }
    cout << a << endl;
}
int main(){
    solve();
}