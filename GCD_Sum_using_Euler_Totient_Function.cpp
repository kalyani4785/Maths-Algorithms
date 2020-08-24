// GCD sum using Euler Totient Function

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long int
#define mod 100000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 100000

ll phi[101];

void init(ll maxN)
{
	for (ll i = 1; i <= maxN; i++)
		phi[i] = i;
	for (ll i = 2; i <= maxN; i++)
		if (phi[i] == i)
		{
			for (ll j = i; j <= maxN; j += i)
			{
				phi[j] /= i;
				phi[j] *= (i - 1);
			}
		}
}
ll getCount(ll d, ll N)
{
	return phi[N / d];
}

int main()
{
	ll q, N;
	cin >> q;
	init(100);
	while (q--)
	{
		ll res = 0;
		cin >> N;
		for (ll i = 1; i * i <= N; i++)
		{
			if (N % i == 0)
			{
				ll d1 = i;
				ll d2 = N / i;
				res += d1 * getCount(d1, N);
				if (d1 != d2)
					res += d2 * getCount(d2, N);

			}

		}
		cout << res << endl;
	}
	return 0;

}

