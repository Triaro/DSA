
/* 
    Triaro's Here !!
*/

#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
 
typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
 
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
 
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
 
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 #define gtc ll tc;cin>>tc;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; //check the limits, dummy
 
vector<ll> dp;

ll check(ll n)
{
        dp.push_back(0);
        dp.push_back(1);
        dp.push_back(2);
        dp.push_back(4);
        dp.push_back(8);
        dp.push_back(16);
        dp.push_back(32);
        for(int i=7; i<=n; i++)
        {
            dp.push_back((dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%MOD);
        }
    
    return dp[n]%MOD;
}
int main() {
	FAST_IO
	ll n;
    cin>>n;
    cout<<check(n);
   
	return 0;
}
 