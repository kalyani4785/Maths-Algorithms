//  Prime Factorization Trial Method--


#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll int
#define mod 100000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 1000





vector<ll> vect;
ll factorization(ll num)
{

	ll n = floor(sqrt(num));
	for (ll i = 2; i <= n; i++) {
		while (num % i == 0)
		{
			vect.pb(i);
			num /= i;
		}
	}
	if (num > 1)
		vect.pb(num);
	return 0;
}



int main()
{
	ll num;
	cin >> num;
	factorization(num);

	for (ll i = 0; i < vect.size(); i++)
		cout << vect[i] << " ";
	return 0;

}

