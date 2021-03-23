#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long goal = k * ((n + k - 1) / k);
        cout << (goal + n - 1) / n << '\n';
    }
    return 0;
}