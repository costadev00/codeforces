#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cont = 0;
    int x;
    int p = 1;
    while (n--)
    {
        cin >> x;
        if (x != 1)
            cont++;
    }
    cout << cont << endl;
    return 0;
}