#include <bits/stdc++.h>

#define GET_MACRO(_1,_2,_3,NAME,...) NAME
#define rep(...)        GET_MACRO(__VA_ARGS__, repn, rep0)(__VA_ARGS__)
#define rep0(i, b)      for(int i = 0; i < (b); ++i)
#define repn(i, a, b)   for(int i = a; i < (b); ++i)
#define trav(a, b)      for(auto& a : (b))
#define all(a)          (a).begin(),(a).end()
#define endl            '\n'
#define M               1000000007
#define tests           int ___;cin>>___;while(___--)
#define testn(n)        cin >> n; for(int i = 0; i < n; i++)

using namespace std;
using ll = int64_t;
using u64 = uint64_t;
using vi = vector<int>;
using vvi = vector<vi>;
using pi = pair<int, int>;
using vpi = vector<pi>;
using pl = pair<ll, ll>;
using vl = vector<ll>;
using vvl = vector<vl>;
