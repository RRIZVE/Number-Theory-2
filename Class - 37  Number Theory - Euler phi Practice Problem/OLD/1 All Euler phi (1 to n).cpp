//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 5e6+5;
unsigned long long phi[mx];
//nln(n)
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

    int n;
    cin >> n;
    for ( int i = 1; i <= n; i++ )
    {
        cout<<i<<"   "<<phi[i]<<endl;

    }

    return 0;
}
