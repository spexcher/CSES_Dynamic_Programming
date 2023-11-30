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

    int dp[n + 1];
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int steps = 1e7 + 2;
        int temp = i;
        while (temp > 0)
        {
            int di = temp % 10;
            temp /= 10;
            if (di != 0)
            {
                steps = min(1 + dp[i - di], steps);
            }
        }
        dp[i] = steps;
    }
    cout << dp[n] << "\n";
}