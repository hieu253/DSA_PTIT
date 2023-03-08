#include<bits/stdc++.h>

using namespace std;

using ll = long long;

ll a[1001][1001],dp[1001][1001],n,m;

void nhap(){
	cin >> n >> m;
	for (int i = 1; i <= n ; ++i){
		for (int j = 1; j <= m ; ++j){
			cin >> a[i][j];
		}
	}
	memset(dp,0,sizeof(dp));
}
void solve(){
	for (int i = 1; i <= n ; ++i){
		for (int j = 1; j <= m; ++j){
			if(i == 1)			dp[i][j] = a[i][j];
			else if(j == 1)		dp[i][j] = max(dp[i-1][j],dp[i-1][j+1]) + a[i][j];
			else if(j == m)		dp[i][j] = max(dp[i-1][j-1],dp[i-1][j]) + a[i][j];
			else  				dp[i][j] = max({dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1]}) + a[i][j];

		}
	}
	ll Max = 0;
	for (int i = 1; i <= m ; ++i)
	{
		Max = max(Max,dp[n][i]);
	}
	cout << Max << endl;
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		nhap();
		solve();
	}
	return 0;
}