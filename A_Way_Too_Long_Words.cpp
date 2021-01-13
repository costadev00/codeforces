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
    char s[101] = "localization";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        // getchar();
        if (strlen(s) <= 10)
        {
            printf("%s\n", s);
            continue;
        }
        printf("%c", s[0]);
        printf("%d", strlen(s) - 2);
        printf("%c\n", s[strlen(s) - 1]);
    }
    return 0;
}