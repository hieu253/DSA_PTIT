#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main(int argc, char const *argv[])
{
	int t ; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		ll ans = 0;
		for (int i = 0; i < n; ++i)
		{
			ans += 1ll*a[i]*i;
			ans %= (long long)1e9+7;
		}
		cout << ans << endl;
	}	
	return 0;
}