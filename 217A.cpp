#include<bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}
#define ll                 long long    
#define vi                 vector<ll >
// -------------------Standard Traversal Moves---------------------
// vi fx = {1 ,-1 ,0, 0}, fy = {0, 0, -1, 1};
// vi fx = {2, -2, 2, -2,  1, -1, 1, -1}, fy = {1, 1, -1, -1, 2, 2, -2, -2};
// vi fx = {1, 1, 1, -1, -1 , -1, 0, 0}, fy = {1, -1, 0, 1, -1, 0, 1, -1};
// ----------------------------------------------------------------

#define int                long long                        
#define pb                 push_back                                                     
#define mii                map<ll ,ll >
#define rep(i, a, b)       for(ll  i=a;i<b;i++)
#ifdef LOCAL
#define dbg(args...)       { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#else
#define dbg(args...)
#endif
#define pii                pair<ll ,ll >
#define ppb                pop_back
#define vii                vector<pair<ll , ll >>
#define si                 set <ll>
#define hell               1000000007
// #define hell               (ll)998244353
#define all(a)             (a).begin(),(a).end()
#define sz(x)              (ll )x.size()
#define mp                 make_pair
#define yes                cout << "YES" << endl
#define no                 cout << "NO" << endl
#define inf                3223372036854775807
#define endl               '\n' 
#define PI                  3.14159265
#define N                  200005
ll n, m, k, a[N];


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(10);
    cout << fixed;
    #ifdef LOCAL
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    ll tests = 1;
    // cin >> tests;
    rep(test, 1, tests+1)
    {
        cin >> n;
        
    }
    #ifdef LOCAL
        cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
    #endif
    return 0;
}