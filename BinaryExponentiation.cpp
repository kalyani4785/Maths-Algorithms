// Binary Exponentiation



#include<bits/stdc++.h>
using namespace std;
#define ll long int


ll binpow(ll a, ll b)
{
	if (b == 0)
		return 1;
	ll res = binpow(a, b / 2);
	if (b % 2)
		return res * res * a;
	else
		return res * res;
}


int main()
{
	ll a, b;
	cin >> a >> b;
	ll result = binpow(a, b);
	cout << result;
	return 0;
}

