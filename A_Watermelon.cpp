#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    cin >> n;
    if (n % 2 == 0 && n > 2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}