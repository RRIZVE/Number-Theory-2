//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

typedef long long ll;

const int mx = 1e6+5;
ll phi[mx];
ll r[mx];



int main()
{
    optimize();

    int lim = 1e6;

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

    int i,j;
    for(i=1; i<=lim; i++)
    {
        for(j=i; j<=lim; j=j+i)
        {
            r[j]=r[j]+(phi[i]*i);
        }

    }


    int t,n;
    cin >> t;
    while(t--)
    {
        cin>>n;
        ll ans=r[n]+1;

        ans=n*ans;
        ans=ans/2;

        cout<<ans<<endl;
    }

    return 0;
}
