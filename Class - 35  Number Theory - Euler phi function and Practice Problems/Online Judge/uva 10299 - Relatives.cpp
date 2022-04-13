//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

typedef long long ll;

const int MX = 1e8+123;
bitset<MX> is_prime;
vector<ll> prime;

void primeGen ( ll n )
{
    n += 100;
    for ( ll i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    ll sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 )
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

    for ( ll i = 3; i <= n; i += 2 )
    {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

int phi( ll n ) // n = 120 = 2^3 * 3^1 * 5^1
{
    ll ret = n;
    for ( auto p : prime )   //p = 2 ;
    {
        if ( 1LL * p * p > n || n == 0 ) break;

        if (  n % p == 0 )
        {
            //n=120==15
            ret /= p; // ret = 60 ; ret = 60/3 = 20 ;
            ret *= (p-1); // ret = 60*(2-1) = 60 ; ret = 20*(3-1) = 40 ; ret

            while ( n % p == 0 )
            {
                n /= p;
            }
        }
    }

    if ( n > 1 )   // n = 5
    {
        ret /= n; // ret = 40/5 = 8
        ret *= (n-1); // ret = 8*4 = 32
    }

    return ret;

}


int main()
{
    //optimize();

    primeGen( 1e8 );


    while ( 1 )
    {
        ll n;
        cin >> n;
        if(n==0)
        {
            break;
        }
        if( n == 1 ) puts("0");
        else
            cout << phi (n) << endl;
    }


    return 0;
}
