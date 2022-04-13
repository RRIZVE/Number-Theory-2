//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

const int MX = 1e7 + 123;

int ans[MX];
bitset<MX> is_prime;
vector<int> prime;

//p^0+p^1+p^2+..........p^n == (p^n+1 - 1)/(p-1)

void primeGen ( int n )
{
	n += 100;
	for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

	for ( int i = 3; i * i <= n; i += 2 )
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

long long SOD (long long n)//4
{
	long long ret = 1;

	for (auto p : prime) //2
	{
		if (1LL * p * p > n)
			break;
		if (n % p == 0)
		{
			long long pwP = p;//P ar power//pwP=2
			while (n % p == 0)
			{
				pwP *= p;//2*2//2*2*2//8
				n = n / p;
			}
			ret *= ( ( pwP - 1 ) / ( p - 1 ) );//(8-1)/(2-1)==7
		}
	}
	if (n > 1)
	{
		ret *= (n + 1);
	}

	return ret;//
}




void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	int lim = 1e7;
	primeGen ( lim );

	cout << SOD(4) << endl; //7//1 2 4 == 7
	//4 == 2^2 == 2^0+2^1+2^2 == 1+2+4 ==7
	cout << SOD(12) << endl; //28//1+2+3+4+6+12==28
	//12==2^2*3//7*4==28





















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