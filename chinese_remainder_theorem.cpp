#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll  int
#define mod 1000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 50


///////// Chinese Remainder Theorem........

ll inv(ll a, ll m)
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

ll find_mix(ll num[], ll rem[], ll k)
{
	ll prod = 1;
	for (ll i = 0; i < k; i++)
		prod *= num[i];
	ll result = 0;
	for (ll i = 0; i < k; i++)
	{
		ll pp = prod / num[i];
		result += rem[i] * pp * inv(pp, num[i]);
	}
	return result % prod;
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





	ll num[] = {3, 4, 5};
	ll rem[] = {2, 3, 1};
	ll k = sizeof(num) / sizeof(num[0]);
	ll x = find_mix(num, rem, k);
	cout << x;






	/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}



