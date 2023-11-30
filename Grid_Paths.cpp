/*-------------------------------Start Snippet-----------------------------
AUTHOR: spexcher
Name: Gourab Modak
email: spexcher@gmail.com
Institution: Indian Institute of Technology Madras(BS UG Data Science 4 year) + Jalpaiguri Government Engineering College (B. Tech UG CSE 4 year)
Github: https://github.com/spexcher/
linkedin : https://www.linkedin.com/in/gourabmodak/
codeforces : https://codeforces.com/profile/spexcher/
codechef : https://www.codechef.com/users/spexcher/
leetcode : https://leetcode.com/spexcher/
------------------------------------------------------------------------------------*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(a, b) for (int i = a; i < b; i++)
#define fo(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL << 60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll, pair<ll, ll>>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
using namespace std;
void solve();
signed main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
void solve()
{
    ll n;
    cin >> n;
    bool grid[n + 1][n + 1];
    rep(i, 1, n + 1) rep(j, 1, n + 1)
    {
        char ch;
        cin >> ch;
        if (ch == '.')
            grid[i][j] = 0;
        else
            grid[i][j] = 1;
    }
    int dp[n + 1][n + 1];
    for (int i = n; i >= 1; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i == n && j == n)
                dp[i][j] = 1;
            else
            {
                int op1 = (j == n) ? 0 : dp[i][j + 1];
                int op2 = (i == n) ? 0 : dp[i + 1][j];
                dp[i][j] = (op1 + op2) % mod;
                if (grid[i][j])
                    dp[i][j] = 0;
            }
        }
    }
    if (grid[n][n])
        cout << 0;
    else
        cout << dp[1][1];
}