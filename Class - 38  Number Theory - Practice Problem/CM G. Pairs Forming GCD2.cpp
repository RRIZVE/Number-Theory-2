//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 1e7+123;
long long phi[mx];
typedef long long ll;

int main()
{
    optimize();

    int lim = 1e7+5;

    for ( int i = 1; i <= lim; i++ ) phi[i] = i;
    for ( int i = 2; i <= lim; i++ )
    {
        if ( phi[i] == i )
        {
            for ( int j = i; j <= lim; j += i )
            {

                phi[j] /= i;
                phi[j] *= (i-1);
            }
        }
    }

    phi[1]=1;
    for ( int i = 2; i <= lim; i++ )
    {
        phi[i]=phi[i-1]+phi[i];

    }

    ll t,k;
    cin>>t;
    for(k=1; k<=t; k++)
    {

        ll a,b,x,y,z,mid;
        cin>>a>>b;
        ll l=1,r=a;
        x=-1;
        while(l<=r)
        {
            mid=(l+r)>>1;
            y=phi[mid];
            //cout<<y<<endl;
            if(y>=b)
            {
                x=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
                //l=1;
            }

        }
        ll ans=-1;
        if(x!=-1)
            ans=a/x;
        cout<<"Case "<<k<<": "<<ans<<endl;
    }


    return 0;
}
