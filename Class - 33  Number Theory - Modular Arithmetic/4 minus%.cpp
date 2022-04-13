//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 10


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z,a,b;
    string s;
    long long ans,r;
    cin>>a>>b;
    //a=21;
    //b=18;
    //ans=(21-18)%10==3

    r=(a%MOD)-(b%MOD);
    if(r<0)
        r=r+MOD;
    else
        r=r;
    ans=r%MOD;

    cout<<ans<<endl;//3













    return 0;
}
