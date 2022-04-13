//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

typedef long long ll;

const int mx = 5e6+5;
unsigned long long phi[mx];



int main()
{
    optimize();

    ll lim = 5e6;

    for ( int i = 1; i <= lim; i++ ) phi[i] = i;
    for ( int i = 2; i <= lim; i++ )
    {
        if ( phi[i] == i )
        {
            for ( int j = i; j <= lim; j += i )
            {
                phi[j] *= (i-1);
                phi[j] /= i;
            }
        }
    }
    for ( int i = 2; i <= lim; i++ )
    {
        phi[i]=1LL*(phi[i]*phi[i]);
        phi[i]=1LL*phi[i-1]+phi[i];

    }

    int t;
    cin>>t;
    for(int k=1; k<=t; k++)
    {
        int n,a,b,x,y,z,sum;
        cin>>a>>b;
        cout<<"Case "<<k<<": "<<phi[b]-phi[a-1]<<endl;
    }

    return 0;
}
