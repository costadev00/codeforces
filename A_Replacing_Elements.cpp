#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t, n, d, aux = 0, cont = 0;
    bool flag = true;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> d;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        sort(a, a + n);
        a[i] = min(a[i], a[i + 1] + a[i + 2]);
        // for (int j = 0; j < n; j++)
        // {
        //     if (a[j] > d)
        //     {
        //         for (int c = 0; c < n; c++)
        //         {
        //             for (int k = c + 1; k < n - 1; k++)
        //             {
        //                 aux = a[c] + a[k];
        //                 if (aux <= d)
        //                 {
        //                     a[c] = aux;
        //                     break;
        //                 }
        //             }
        //             cont++;
        //         }
        //     }
        // }

        for (int j = 0; j < n; j++)
        {
            if (a[j] > d)
            {
                flag = false;
            }
        }

        if (flag)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}