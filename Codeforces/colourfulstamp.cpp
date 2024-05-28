#include<bits/stdc++.h>
#include<complex>
#include<queue>
#include<set>
#include<unordered_set>
#include<list>
#include<chrono>
#include<random>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<string>
#include<vector>
#include<map>
#include<unordered_map>
#include<stack>
#include<iomanip>
#include<fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> p64;
typedef pair<int,int> p32;
typedef pair<double,double> pdd;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int b = 0, r = 0;
        bool res = true;
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                if (s[i] != 'W') {
                    if (s[i] == 'R') r++;
                    else if (s[i] == 'B') b++;
                    if (r == 0 && b == 0) continue;
                    else if (r == 0 || b == 0) {
                        res = false;
                        break;
                    }
                }
            }
            if (s[i] == 'R') r++;
            else if (s[i] == 'B') b++;
            else {
                if (r == 0 && b == 0) continue;
                else if (r == 0 || b == 0) {
                    res = false;
                    break;
                }
                r = 0; b = 0;
            }
        }
        if (res) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    
    }

    return 0;

}