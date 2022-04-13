//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007;


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    string s;
    long long ans=1;
    cin>>n;//50
    for(i=1;i<=n;i++)
    {
        ans*=i;
        ans%=MOD;
    }
    cout<<ans;//50!==//==318608048>>last 10^9 digit












    return 0;
}
