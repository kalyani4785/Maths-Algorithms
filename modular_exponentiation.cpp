#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll  int
#define mod 1000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 50




///////////// Modular Exponentiation (RECURSIVE)..

ll power(ll a, ll b, ll c)
{
	if (a == 0)
		return 0;
	if (b == 0)
		return 1;
	long y;
	if (b % 2 == 0)
	{
		y = power(a, b / 2, c);
		y = (y * y) % c;

	}
	else
	{
		y = a % c;
		y = (y * power(a, b - 1, c) % c) % c;
	}
	return (int)((y + c) % c);
}

int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
////////////////////////////////////// start.................

	ll a = 2, b = 5, c = 13;
	ll ans = power(a, b, c);
	cout << "2 to the power 5 mod 13 is: " << ans << endl;



	/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}


