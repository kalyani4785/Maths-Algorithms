// Segmented Sieve Program

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long int
#define mod 100000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 100000

void simple_sieve(ll lmt, vector<ll> &prime)
{
	bool mark[lmt + 1];
	memset(mark, false, sizeof(mark));
	for (ll i = 2; i <= lmt; i++)
	{
		if (mark[i] == false)
		{
			prime.pb(i);
			for (ll j = i; j <= lmt; j += i)
				mark[j] = true;
		}
	}
}

void prime_range(ll low, ll high)
{
	ll lmt = floor(sqrt(high)) + 1;
	vector<ll> prime;
	simple_sieve(lmt, prime);
	ll n = high - low + 1;
	bool mark[n + 1];
	memset(mark, false, sizeof(mark));
	for (ll i = 0; i < prime.size(); i++)
	{
		ll lowlim = floor(low / prime[i]) * prime[i];
		if (lowlim < low)
			lowlim += prime[i];
		for (ll j = lowlim; j <= high; j += prime[i])
			mark[j - low] = true;

	}
	for (ll i = low; i <= high; i++)
		if (!mark[i - low])
			cout << i << " ";

}

int main()
{
	ll low, high;
	cin>>low>>high;
	prime_range(low, high);
	return 0;
}


