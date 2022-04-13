//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

typedef long long ll;


const int MX = 1e7+123;
#define MOD 10000007

int ans[MX];
bitset<MX> is_prime;
vector<int> prime;

void primeGen ( int n )
{
    n += 100;
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    for ( int i = 3; i*i <= n; i += 2 )
    {
        if ( is_prime[i] == 1 )
        {
            for ( int j = i*i; j <= n; j += ( i + i ) )
            {
                is_prime[j] = 0;
            }
        }
    }

    is_prime[2] = 1;
    prime.push_back (2);

    for ( int i = 3; i <= n; i += 2 )
    {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}



int main()
{
    optimize();

    int lim = 1e7;
    primeGen ( lim );

    while(1)
    {



        ll n,ans=1;
        cin>>n;

        if(n==0)
        {
            break;
        }

        for(auto p:prime)
        {
            if(p>n)
                break;
            ll temp=n;
            ll cnt=0;
            while(temp>0)
            {
                cnt=cnt+(temp/p);
                temp=temp/p;

            }
            cnt++;

            ll sum=(cnt*(cnt+1))/2;
            ans=ans*sum;
            ans=ans%MOD;


        }

        cout<<ans<<endl;
    }














    return 0;
}
