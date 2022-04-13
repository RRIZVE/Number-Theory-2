///   ***   ---   |||        In the name of ALLAH       |||   ---   ***   ///



#include<bits/stdc++.h>
using namespace std;


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define M 1000003

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

ll modPow ( ll b, ll p )
{
    long long ret = 1;

    while ( p > 0 ) {
        if ( p % 2 == 1 ) {
            ret *= b;
            ret %= M;
        }

        p /= 2;

        b *= b;
        b %= M;
    }

    return ret;
}


const int mx = 1e6+123;
ll fact[mx];
ll invFact[mx];


int main()
{
    optimize();

    int lim = 1e6;
    fact[0] = 1;
    invFact[0] = 1;

    for ( int i = 1; i <= lim; i++ ) {
        fact[i] = ( fact[i-1] * i ) % M;
        invFact[i] = modPow( fact[i], M-2 ) % M;
    }


    int t;
    cin >> t;
    for ( int tc = 1; tc <= t; tc++ ) {
        int n, k;
        cin >> n >> k;

        ll ans = ( fact[n] * invFact[n-k] * invFact[k] ) % M;

        cout << "Case " << tc << ": " << ans << endl;
    }

    return 0;
}
