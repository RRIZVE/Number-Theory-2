//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int MX = 1e7+123;

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

long long SOD (long long n)//4
{
    long long ret = 1;

    for(auto p:prime)//2
    {
        if(1LL*p*p>n)
            break;
        if(n%p==0)
        {
            long long currSum = 1;//curret sum//2^0
            long long powP = 1;//P ar power//2^0
            while(n%p==0)
            {
                powP *= p;//2^1//2^2
                currSum += powP;//1+2//3+4//==7
                n=n/p;
            }
            ret *= currSum;//7
        }
    }
    if(n>1)
        {
            ret *= (1+n);
        }

        return ret;//
}

int main()
{
    optimize();

    int lim = 1e7;
    primeGen ( lim );

    int t,i,j,k,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<SOD(n)-n<<endl;
    }











    return 0;
}

