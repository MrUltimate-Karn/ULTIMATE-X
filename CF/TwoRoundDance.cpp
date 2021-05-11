/*
E. Two Round Dances
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
One day, n people (n is an even number) met on a plaza and made two round dances, each round dance consists of exactly n2 people. Your task is to find the number of ways n people can make two round dances if each round dance consists of exactly n2 people. Each person should belong to exactly one of these two round dances.

Round dance is a dance circle consisting of 1 or more people. Two round dances are indistinguishable (equal) if one can be transformed to another by choosing the first participant. For example, round dances [1,3,4,2], [4,2,1,3] and [2,1,3,4] are indistinguishable.

For example, if n=2 then the number of ways is 1: one round dance consists of the first person and the second one of the second person.

For example, if n=4 then the number of ways is 3. Possible options:

one round dance — [1,2], another — [3,4];
one round dance — [2,4], another — [3,1];
one round dance — [4,1], another — [3,2].
Your task is to find the number of ways n people can make two round dances if each round dance consists of exactly n2 people.

Input
The input contains one integer n (2≤n≤20), n is an even number.

Output
Print one integer — the number of ways to make two round dances. It is guaranteed that the answer fits in the 64-bit integer data type.

Examples
inputCopy
2
outputCopy
1
inputCopy
4
outputCopy
3
inputCopy
8
outputCopy
1260
inputCopy
20
outputCopy
12164510040883200

*/
#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <chrono>
#include <complex>
using namespace std;
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned ll
#define mp                   make_pair
#define eb                   emplace_back
#define pb                   push_back
#define pf                   push_front
#define popb                 pop_back
#define popf                 pop_front
#define hashmap              unordered_map
#define hashset              unordered_set
#define lb                   lower_bound
#define ub                   upper_bound
#define all(a)               (a).begin(), (a).end()
#define rall(a)              (a).rbegin(), (a).rend()
#define ff                   first
#define ss                   second
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=0;k<n;k++)
#define forr(i,a,b) for(ll i=a;i<b;i++)
#define forrr(i,b,a) for(ll i=b;i>=a;i--)
#define forrrr(i,a,b,k) for(ll i=a;i<b;i=i+k)
#define graph          vector<vector<int>>
#define sz(v) v.size()
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<string>      vs;
typedef vector<double>      vd;
typedef vector<pii>         vpii;
typedef vector<pll>         vpll;
typedef pair< ll, pll>      plll;
typedef vector<plll>      vplll;
typedef  vector<string> 	     vs;
typedef  vector<char>	         vc;
typedef  vector<bool>            vb;
typedef  map<string, int>         msi;
typedef  map<int, int>	         mii;
typedef  map<ll, ll>             mll;
typedef  map<char, int>           mci;
typedef  map<int, string>	     mis;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef priority_queue <ll> pq;
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;
const ll MOD = 1000000007;
void solve();
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("error1.txt", "w", stderr);
	freopen("output1.txt", "w", stdout);
#endif


	//ll t ; cin >> t;
	//while (t--)
	{
		solve();
		cout << "\n";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
ll ceils(ll x, ll y) {
	return x / y + ((x % y) != 0);
}
ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}


ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;

}
void solve() {
	ll n;
	cin >> n;
	ll ans = 1;
	for (ll i = 1; i < n; i++)
		ans *= i;
	ans = ans * 2 / n;
	cout << ans;
}
