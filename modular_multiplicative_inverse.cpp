#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll  int
#define mod 1000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 50


///////// Modular Multiplicative Inverse........

ll modInverse(ll a, ll m)
{
	ll m0 = m, t, q, x1 = 1, x0 = 0;

	if (m == 1)
	{
		return 0;
	}
	while (a > 1)
	{
		q = a / m;
		t = m;
		m = a % m;
		a = t;
		t = x0;
		x0 = x1 - q * x0;
		x1 = t;
	}
	if (x1 < 0)
		x1 += m0;
	return x1;
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



	ll a = 3, m = 11;
	ll inverse = modInverse(a, m);
	cout << "Modular Multiplicative Inverse of 3 mod 11 is :" << inverse << endl;







	/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}


