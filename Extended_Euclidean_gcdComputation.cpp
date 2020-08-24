//  Extended Euclidean Algorithm for Computing GCD..



#include<bits/stdc++.h>
using namespace std;
#define ll int

ll gcdExtComputation(ll a, ll b, ll &x, ll &y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	ll x1, y1;
	ll d = gcdExtComputation(b, a % b, x1, y1);
	x = y1;
	y = x1 - y1 * (a / b);
	return d;

}



int main()
{
	ll a, b, x = 0, y = 0;
	cin >> a >> b;
	ll gcd_val =  gcdExtComputation(a, b, x, y);
	cout << gcd_val;
	return 0;
}
