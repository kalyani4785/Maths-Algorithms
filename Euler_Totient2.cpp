// Euler Totient Function [Time Complexity: O(nlog(log n))]

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long int
#define mod 100000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 100000


ll phi[10001];

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

int main()
{
	init(maxn);
	ll num;
	cin>>num;
	cout<<phi[num];
	return 0;	
}
