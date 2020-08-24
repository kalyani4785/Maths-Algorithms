//  Prime Factorization [Time Complexity:- O(sqrt(N))]



#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long int
#define mod 100000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 100000



void primefact(int N)
{
	for (ll i = 2; i * i <= N; i++)
		if (N % i == 0)
		{
			ll cnt = 0;
			while (N % i == 0)
			{
				cnt++;
				N /= i;
			}
			cout << i << " ^ " << cnt << endl;
		}
	if (N > 1)
		cout << N << " ^ " << 1 << endl;
}

int main()
{
	ll N;
	cin>>N;
	primefact(N);
	return 0;
}
