/**
 * CP-Templates - Comprehensive Competitive Programming Template
 * Author: [Aboubakr jelloulat]
 * GitHub: [aboubakr-jelloulat]
 * 
 * Usage: Include this file at the beginning of your solution
 * Platforms: LeetCode, Codeforces, and more ...
 */

#include <algorithm>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// <bits/stdc++.h>    ********** not available on macOS by default ***********

using namespace std;

// Type definitions

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;
typedef vector<vector<int> > vvi; 


using namespace std;
typedef long long ll;
typedef long double lld;
typedef map<string, int> map1;
using namespace std;
// #define endl '\n';
 
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
 
#define fast               \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);
#define all(v) ((v).begin()), ((v).end())
#define pb push_back
#define MP make_pair
#define py cout << "YES\n";
#define pn cout << "NO\n"
#define clr(x, val) memset(x, val, sizeof(x))
#define OUT 0
#define IN 1
#define getin(n) for (int i = 0; i < n; ++i)
#define l(i, s, n) for (int i = s; i < n; i++)
#define le(i, s, n) for (int i = s; i <= n; i++)
#define ln(i, e, n) for (ll i = n; i >= e; i--)


typedef  vector <string> vs;

// Loops and iteration
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

// Useful functions

void	FastIO() {ios::sync_with_stdio(0); cin.tie(0);}

// test