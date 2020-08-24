// Sieve of Eratosthenes [SIMPLE SIEVE]

#include<bits/stdc++.h>
using namespace std;
#define ll int
ll isPrime[100001];

ll SieveEra(ll num)
{
	for (ll i = 1; i <= num; i++)
		isPrime[i] = 1;
	isPrime[0] = 0, isPrime[1] = 0;
	for (ll i = 2; i * i <= num; i++)
	{
		if (isPrime[i] == 1)
		{
			for (ll j = i * i; j <= num; j += i)
				isPrime[j] = 0;
		}
	}
	for (ll i = 0; i <= num; i++)
		if (isPrime[i] == 1)
			cout << i << " " << endl;
	return 0;
}


int main()
{
	ll num;
	cin >> num;
	SieveEra(num);
	return 0;
}
