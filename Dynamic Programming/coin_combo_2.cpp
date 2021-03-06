
/* 
    Triaro's Here !!
*/

#pragma GCC optimize("O3")
#pragma GCC target("sse4")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i, a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define FAST_IO              \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define gtc \
    ll tc;  \
    cin >> tc;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; //check the limits, dummy

ll arr[101];
ll solve(ll n, ll x)
{

    ll dp[n + 1][x + 1];
    dp[0][0] = 0;

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= x; j++)
        {
            dp[0][j] = 0;
            if (j == 0)
                dp[i][j] = 1;
            else if (arr[i] > j)
                dp[i][j] = (dp[i - 1][j]) % MOD;
            else
                dp[i][j] = (dp[i - 1][j] + dp[i][j - arr[i]]) % MOD;
        }

    cout << dp[n][x];
}

int main()
{
    FAST_IO
    ll n, x;
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    solve(n, x);

    return 0;
}
