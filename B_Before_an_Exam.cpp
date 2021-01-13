#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int d, sumTime, auxSumTime = 0, minTime, maxTime, res = 0, flag = 1;
    cin >> d >> sumTime;
    auxSumTime = 24 * d;
    if (auxSumTime < sumTime)
    {
        printf("NO\n");
        return 0;
    }
    for (int i = 0; i < d; i++)
    {
        cin >> minTime >> maxTime;
        for (int j = minTime; j < maxTime; j++)
        {
            if (res <= maxTime)
            {
                res++;
            }
        }
        if (flag == 1)
        {
            printf("YES\n");
            flag = 0;
        }
        printf("%d ", res);
        res = 0;
    }

    return 0;
}