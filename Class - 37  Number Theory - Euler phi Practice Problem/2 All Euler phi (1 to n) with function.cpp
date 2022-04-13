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

const int mx = 5e6 + 5;
unsigned long long phi[mx];

void PHI(int lim)
{
	for ( int i = 1; i <= lim; i++ ) phi[i] = i;
	for ( int i = 2; i <= lim; i++ )
	{
		if ( phi[i] == i )
		{
			for ( int j = i; j <= lim; j += i )
			{
				phi[j] *= (i - 1);
				phi[j] /= i;
			}
		}
	}
}

void solve()
{

	int lim = 1e6;
	PHI(lim);


	int n;
	cin >> n;
	//cout << phi[n] << endl;
	for ( int i = 1; i <= n; i++ )
	{
		cout << i << "   " << phi[i] << endl;

	}









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