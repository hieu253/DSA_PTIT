#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int dp[n+1];
		dp[0] = 0;
		for (int i = 1; i <= n ; ++i)
		{
			dp[i] = 10000007;
			for (int j = 1; j <= sqrt(n) ; ++j)
			{
				if(i >= j * j){
					dp[i] = min(dp[i],dp[i - j*j] + 1);
				}
			}
		}
		cout << dp[n] << ' ';
	}
	return 0;
}