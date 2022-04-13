//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 10;


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    string s;
    long long ans=0;
    cin>>n;//6
    for(i=1;i<=n;i++)
    {
        ans+=i;
        ans%=MOD;
    }
    cout<<ans;//6//1 2 3 4 5 6//==21//1












    return 0;
}
