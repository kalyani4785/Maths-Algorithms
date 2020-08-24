#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll  int
#define mod 1000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 50


///////// Linear Diophantine Equations........

ll gcd(ll a, ll b, ll &x, ll &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	ll x1, y1;
	ll d = gcd(b, a % b, x1, y1);

	x = y1;
	y = x1 - y1 * (a / b);

	return d;
}

bool find_any_sol(ll a, ll b, ll c, ll &x0, ll &y0, ll &g)
{
	g = gcd(abs(a), abs(b), x0, y0);
	if (c % g)
		return false;
	x0 *= c / g;
	y0 *= c / g;
	if (a < 0)
		x0 = -x0;
	if (b < 0)
		y0 = -y0;
	return true;
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





	ll x, y, a, b, c, g;
	cin >> a >> b >> c;
	bool d = find_any_sol(a, b, c, x, y, g);
	if (d == true)
	{
		cout << "Possible" << endl;
		cout << "(" << a << " x" << x << ") + (" << b << " x" << y << ") =" << c << endl;
	}
	else
		cout << "Not Possible" << endl;









	/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}

