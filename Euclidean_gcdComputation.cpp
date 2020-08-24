// Euclidean Algorithm for Computing GCD..



#include<bits/stdc++.h>
using namespace std;
#define ll int


ll gcdComputation(ll a, ll b)
{
	if (b == 0)
		return a;
	else
		gcdComputation(b, a % b);
}



int main()
{
	ll a, b;
	cin >> a >> b;
	ll gcd_val =  gcdComputation(a, b);
	cout << gcd_val;
	return 0;
}

