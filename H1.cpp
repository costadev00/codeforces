#include <bits/stdc++.h>

#define N 100005

using namespace std;

class KMP
{
    string P;
    vector<int> b;

public:
    KMP(string _P) : P(_P)
    {
        int m = P.size();
        b.assign(m + 1, -1);
        for (int i = 0, j = -1; i < m;)
        {
            while (j >= 0 && P[i] != P[j])
                j = b[j];
            b[++i] = ++j;
        }
    }
    vector<int> match(string T)
    {
        vector<int> ans;
        for (int i = 0, j = 0, n = T.size(); i < n;)
        {
            while (j >= 0 && T[i] != P[j])
                j = b[j];
            i++;
            j++;
            if (j == (int)P.size())
            {
                ans.push_back(i - j);
                j = b[j];
            }
        }
        return ans;
    }
    int repetend()
    {
        int n = P.size();
        int ans = n - b[n];
        if (n % ans)
            ans = n;
        return ans;
    }
};

vector<int> g[N];
map<int, char> V;
vector<int> component;

string dfs(int a, int b)
{
    string s = "";
    s += V[a];
    if (a == b)
    {
        return s;
    }
    for (int i = 0; i < g[a].size(); i++)
    {
        int v = g[a][i];
        if (!component[v])
        {
            component[v] = 1;
            s += dfs(v, b);
            if (component[b])
            {
                return s;
            }
        }
    }
    return "";
}

int main()
{
    int n, q;
    scanf("%d%d", &n, &q);
    string pd;
    cin >> pd;
    string s;
    cin >> s;
    for (int i = 1; i <= n; i++)
    {
        V[i] = s[i - 1];
    }
    for (int i = 1; i < n; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        g[a].push_back(b);
        g[b].push_back(a);
    }
    while (q--)
    {
        int l;
        scanf("%d", &l);
        if (l == 1)
        {
            int b, c;
            scanf("%d%d", &b, &c);
            component = vector<int>(N, 0);
            component[b] = 1;
            string d = dfs(b, c);
            KMP k(d);
            cout << k.match(pd).size() << endl;
        }
        else
        {
            int b;
            char c;
            scanf("%d %c", &b, &c);
            V[b] = c;
        }
    }
    return 0;
}