#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, x = 0;
    char op[4];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> op;
        // getchar();
        if (strcmp(op, "X++") == 0 || strcmp(op, "++X") == 0)
        {
            x++;
        }
        else if (strcmp(op, "X--") || strcmp(op, "--X"))
        {
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}