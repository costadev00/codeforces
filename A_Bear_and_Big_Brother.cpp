#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a, b, cont = 0;
    cin >> a >> b;
    while (a <= b)
    {
        cont++;
        a *= 3;
        b *= 2;
    }
    cout << cont << endl;
    return 0;
}