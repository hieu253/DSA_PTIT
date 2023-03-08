#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		ll a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		int ans = 0;
		if(n % 2 == 1)
			for (int i = 0; i < n/2 +1; ++i)
			{
				ans += a[i] * b[n - i - 1] + a[n - i - 1] * b[i]; 
			}
		else
			for (int i = 0; i < n/2; ++i)
			{
				ans += a[i] * b[n - i - 1] + a[n - i - 1] * b[i]; 
			}
		if(n % 2 == 1)   ans -= a[n / 2] * b[n - n / 2 - 1];
		cout << ans << endl;
	}
	return 0;
}
