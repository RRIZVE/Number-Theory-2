//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

//cmp==log2(P);


int main()
{
    //optimize();
    long long b,p,m;

    while(cin>>b>>p>>m)// 3 6 1e9+7//6==1 1 0
    {
        long long ans = 1;

        while(p>0)//p=6,b=3
        {
            if(p%2==1)
            {
                ans *= b;//1*9==9//9*81==729//==>>729//1*3^2*3^4==>>729//3^0*3^2*3^4==>729
                ans %= m;//9//729
            }

            p /=2;//3//1

            b *= b;//3*3==9//9*9==81
            b %= m;//9//81

        }

        cout<<ans<<endl;
    }



















    return 0;
}
