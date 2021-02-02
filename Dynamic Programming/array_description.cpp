
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

ll solve(ll n)
{

    return 0;
}

int main()
{
    FAST_IO
    ll n, m;
    cin >> n >> m;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll p = 1;
    if (arr[0] == 0)
    {
        if (arr[1] != 1 && arr[1] + 1 <= m)
            p = 2;
    }
    if (arr[n - 1] == 0)
    {
        if (arr[n - 1] != 1 && arr[n - 2] + 1 <= m)
            p *= 2;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i + 1] == arr[i - 1])
        {
            if (arr[i + 1] + 1 <= m)
                p *= 3;
            else
                p *= 2;
        }
        else if (abs(arr[i + 1] - arr[i - 1]) == 1)
            p *= 2;
        else if (abs(arr[i + 1] - arr[i - 1]) == 2)
            p *= 1;
    }
    cout << p;

    return 0;
}
