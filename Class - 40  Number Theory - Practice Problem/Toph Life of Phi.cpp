//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

typedef long long ll;

const int mx = 5e6+5;
unsigned long long phi[mx];

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
                phi[j] *= (i-1);
                phi[j] /= i;
            }
        }
    }

    int t;
    cin >> t;
    while(t--)
    {
        ll i,j,k,n,x,y,z,ans;
        cin>>n;
        x=n;
        n=n-1;
        ll sum=(n*(n+1))/2;
        ll sum2=(phi[x]*x)/2;

        cout<<sum-sum2<<endl;

    }


    return 0;
}
