//In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

// compexcity ==O(sqrt n)
//https://forthright48.com/divisor-summatory-function/

int SNOD ( int n )
{
    int sq = sqrt ( n );
    int ret = 0;
    for ( int i = 1; i <= sq; i++ )
    {
        ret += ( n / i ) - i;
    }

    ret *= 2;
    ret += sq;

    return ret;
}


int main()
{
    optimize();

    int n;
    cin >> n;

    cout << SNOD ( n ) << endl;


    return 0;
}
