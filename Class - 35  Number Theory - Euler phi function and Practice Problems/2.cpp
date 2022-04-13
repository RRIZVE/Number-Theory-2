//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

//root(n)/ln(n)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int MX = 1e7 + 123;
bitset<MX> is_prime;
vector<int> prime;

void primeGen ( int n )
{
	n += 100;
	for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

	int sq = sqrt ( n );
	for ( int i = 3; i <= sq; i += 2 )
	{
		if ( is_prime[i] == 1 )
		{
			for ( int j = i * i; j <= n; j += ( i + i ) )
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

int phi( int n ) // n = 120 = 2^3 * 3^1 * 5^1
{
	int ret = n;
	for ( auto p : prime )   //p = 2 ;
	{
		if ( 1LL * p * p > n || n == 0 ) break;

		if (  n % p == 0 )
		{
			//n=120==15
			ret /= p; // ret = 60 ; ret = 60/3 = 20 ;
			ret *= (p - 1); // ret = 60*(2-1) = 60 ; ret = 20*(3-1) = 40 ; ret

			while ( n % p == 0 )
			{
				n /= p;
			}
		}
	}

	if ( n > 1 )   // n = 5
	{
		ret /= n; // ret = 40/5 = 8
		ret *= (n - 1); // ret = 8*4 = 32
	}

	return ret;

}


void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	primeGen( 1e3 );


	
	
                
                   cin >> n;
	cout << phi (n) << endl;
	








}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}