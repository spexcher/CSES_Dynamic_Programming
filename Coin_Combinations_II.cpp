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
    ll t, n, m, x, i, j, k, q;
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
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1);
    fr(1, n + 1)
            cin >>
        v[i];
    int dp[n + 1][x + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int sum = 0; sum <= x; sum++)
        {
            if (sum == 0)
                dp[i][sum] = 1;
            else
            {
                int op1 = (v[i] > sum) ? 0 : dp[i][sum - v[i]];
                int op2 = (i == 1) ? 0 : dp[i - 1][sum];
                dp[i][sum] = (op1 + op2) % mod;
            }
        }
    }

    cout << dp[n][x];
}