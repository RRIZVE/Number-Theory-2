//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 10


int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    long long  b=3,p=6,m=25;
    long long ans=1;

    //3^6==729;
    //729%25==4
    //cmp=O(p)

    for(i=1;i<=p;i++)
    {
        ans*=b;
        ans%=m;

    }


    cout<<ans<<endl;//













    return 0;
}
