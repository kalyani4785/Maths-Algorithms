
// Euler Totient Function [Time Complexity: O(sqrt(n))]

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long int
#define mod 100000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 100000


ll phi(ll n)
{
	ll result = n;
	for (ll i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
				n = n / i;
			result -= result / i;
		}
	}
	if (n > 1)
		result -= result / n;
	return result;
}

int main()
{
	ll num;
	cin>>num;
	ll res=phi(num);
	cout<<"Number of coprimes: "<<res;
	return 0;
}
