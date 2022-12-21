#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

// function to convert decimal to binary
string decToBinary(int n)
{
    // // array to store binary number
    // int binaryNum[32];
    // string s;
    // // counter for binary array
    // int i = 0;
    // while (n > 0)
    // {
    //     // storing remainder in binary array
    //     binaryNum[i] = n % 2;
    //     n = n / 2;
    //     i++;
    // }

    // // printing binary array in reverse order
    // for (int j = i - 1; j >= 0; j--)
    // {
    //     char c = binaryNum[j];
    //     s.push_back(c);
    // }
    string s = "";
    while(n){
        s.push_back(n%2);
        n/=2;
    }

    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    fastio;
    int n;
    int a, b;
    while (cin >> n)
    {
        int aux;
        while (n--)
        {
            unsigned long long int ans = 0;
            int cont = 0;
            cin >> a >> b;
            for (int i = a; i <= b; i++)
            {
                // debug(i);
                string dec = to_string(i);
                string bin = decToBinary(i);
                string auxdec = dec;
                string auxbin = bin;
                reverse(auxdec.begin(), auxdec.end());
                reverse(auxbin.begin(), auxbin.end());
                if (dec == auxdec && bin == auxbin)
                {
                    ans += i;
                    cont++;
                }
            }
            cout << ans << " " << cont << endl;
        }
    }
    return 0;
}