/*
A. Circle Coloring
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given three sequences: a1,a2,…,an; b1,b2,…,bn; c1,c2,…,cn.

For each i, ai≠bi, ai≠ci, bi≠ci.

Find a sequence p1,p2,…,pn, that satisfy the following conditions:

pi∈{ai,bi,ci}
pi≠p(imodn)+1.
In other words, for each element, you need to choose one of the three possible values, such that no two adjacent elements (where we consider elements i,i+1 adjacent for i<n and also elements 1 and n) will have equal value.

It can be proved that in the given constraints solution always exists. You don't need to minimize/maximize anything, you need to find any proper sequence.

Input
The first line of input contains one integer t (1≤t≤100): the number of test cases.

The first line of each test case contains one integer n (3≤n≤100): the number of elements in the given sequences.

The second line contains n integers a1,a2,…,an (1≤ai≤100).

The third line contains n integers b1,b2,…,bn (1≤bi≤100).

The fourth line contains n integers c1,c2,…,cn (1≤ci≤100).

It is guaranteed that ai≠bi, ai≠ci, bi≠ci for all i.

Output
For each test case, print n integers: p1,p2,…,pn (pi∈{ai,bi,ci}, pi≠pimodn+1).

If there are several solutions, you can print any.

Example
inputCopy
5
3
1 1 1
2 2 2
3 3 3
4
1 2 1 2
2 1 2 1
3 4 3 4
7
1 3 3 1 1 1 1
2 4 4 3 2 2 4
4 2 2 2 4 4 2
3
1 2 1
2 3 3
3 1 2
10
1 1 1 2 2 2 3 3 3 1
2 2 2 3 3 3 1 1 1 2
3 3 3 1 1 1 2 2 2 3
outputCopy
1 2 3
1 2 1 2
1 3 4 3 2 4 2
1 3 2
1 2 3 1 2 3 1 2 3 2
Note
In the first test case p=[1,2,3].

It is a correct answer, because:

p1=1=a1, p2=2=b2, p3=3=c3
p1≠p2, p2≠p3, p3≠p1
All possible correct answers to this test case are: [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1].

In the second test case p=[1,2,1,2].

In this sequence p1=a1, p2=a2, p3=a3, p4=a4. Also we can see, that no two adjacent elements of the sequence are equal.

In the third test case p=[1,3,4,3,2,4,2].

In this sequence p1=a1, p2=a2, p3=b3, p4=b4, p5=b5, p6=c6, p7=c7. Also we can see, that no two adjacent elements of the sequence are equal.


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


	ll t ; cin >> t;
	while (t--)
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
	ll a[n], b[n], c[n];
	foi(n)
	cin >> a[i];
	foi(n)
	cin >> b[i];
	foi(n)
	cin >> c[i];
	ll ans[n];
	ans[0] = a[0];
	for (ll i = 1; i < n; i++) {
		ans[i] = a[i];
		if (ans[i] == ans[i - 1])
			ans[i] = b[i];
		if (ans[i] == ans[i - 1])
			ans[i] = c[i];
	}
	if (ans[n - 1] == ans[0]) {
		if (ans[n - 1] == a[n - 1]) {
			if (ans[n - 2] == b[n - 1])
				ans[n - 1] = c[n - 1];
			else
				ans[n - 1] = b[n - 1];
		}
		else if (ans[n - 1] == b[n - 1]) {
			if (ans[n - 2] == a[n - 1])
				ans[n - 1] = c[n - 1];
			else
				ans[n - 1] = a[n - 1];
		}
		else {
			if (ans[n - 2] == b[n - 1])
				ans[n - 1] = a[n - 1];
			else
				ans[n - 1] = b[n - 1];
		}
	}
	foi(n)
	cout << ans[i] << " ";


}
