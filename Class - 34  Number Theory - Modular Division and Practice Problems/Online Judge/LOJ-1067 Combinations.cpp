//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e6;
int fec[mx];
int inv[mx];

#define MOD 1000003

inline void normal(ll &a)
{
    a %= MOD;
    (a < 0) && (a += MOD);
}
inline ll modMul(ll a, ll b)
{
    a %= MOD, b %= MOD;
    normal(a), normal(b);
    return (a*b)%MOD;
}
inline ll modAdd(ll a, ll b)
{
    a %= MOD, b %= MOD;
    normal(a), normal(b);
    return (a+b)%MOD;
}
inline ll modSub(ll a, ll b)
{
    a %= MOD, b %= MOD;
    normal(a), normal(b);
    a -= b;
    normal(a);
    return a;
}
inline ll modPow(ll b, ll p)
{
    ll r = 1;
    while(p)
    {
        if(p&1) r = modMul(r, b);
        b = modMul(b, b);
        p >>= 1;
    }
    return r;
}
inline ll modInverse(ll a)
{
    return modPow(a, MOD-2);
}
inline ll modDiv(ll a, ll b)
{
    return modMul(a, modInverse(b));
}

int main()
{
    //optimize();
    int i;
    fec[0]=1;
    fec[1]=1;
    for(i=2; i<=mx+100; i++)
    {
        //fec[i]=((fec[i-1])*(i))%MOD;
        fec[i]=modMul(fec[i-1],i);


    }
    int t,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {
        cout<<"Case "<<k<<": ";
        ll i,j,n,r,x,y,z,a,b,c,d,e;
        cin>>n>>r;
        a=n-r;
        b=fec[a];
        c=fec[r];
        d=modInverse(b);
        e=modInverse(c);
        ll ans=modMul(fec[n],d);
        ll ans2=modMul(ans,e);

        cout<<ans2<<endl;
    }













    return 0;
}
