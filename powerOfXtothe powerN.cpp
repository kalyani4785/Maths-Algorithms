#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll  int
#define mod 1000
#define for1(i,k,n) for(ll i=k;i<n;i++)
#define for2(k,n) for(ll j=k;j<n;j++)
#define E cout<<endl
#define maxn 50

////////// Power(x,n) in O(log n) time complexity..

float power(float x, int y)
{
	float temp;
	if (y == 0)
		return 1;
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return temp * temp;
	else
	{
		if (y > 0)
			return x * temp * temp;
		else
			return (temp * temp) / x;
	}

}

int main()
{
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base:: sync_with_stdio(false);
	cin.tie(0);
////////////////////////////////////// start.................


	float x;
	int y;
	cin >> x >> y;
	ll ans = power(x, y);
	cout << "Power of x^y is : " << ans << endl;




	/////////////////////////////end................................... ....
#ifndef ONLINE_JUDGE
	//cout << "\nDone in " << (double) clock() / CLOCKS_PER_SEC << "sec" << endl;
#endif
	return 0;

}


