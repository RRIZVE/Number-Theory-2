//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

#define MOD 5


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
    int i,j,k,n,t,x,y,z,a,b,p;
    string s;
    cin >> a>>b;
    cout << ((a%MOD) * modPow ( b, MOD-2 ))%MOD << endl;
    /*
    MOD=5;
    28/7
    (28%5*(7^(5-2)))%5
    (3*3)%5
     9%5
     4
     log2(MOD)
     */










    return 0;
}
