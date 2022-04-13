//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;
int a[mx];

#define MOD 1000000007

ll modPow ( ll b, ll p )
{
    long long ret = 1;

    while ( p > 0 )
    {
        if ( p % 2 == 1 )
        {
            ret *= b;
            ret %= MOD;
        }

        p /= 2;

        b *= b;
        b %= MOD;
    }

    return ret;
}

int main()
{
    optimize();
    int i,j,k,n,m,x,y,z,c=0,cnt=0;
    string s;
    cin >> n;
    cout << modPow ( 2, n ) << endl;











    return 0;
}
