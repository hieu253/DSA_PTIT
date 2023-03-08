#include<bits/stdc++.h>

using namespace std;

using ll = long long;

ll a[101][101], dp[101][101], n, m;

void nhap(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
}

void solve(){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(i == 1 && j == 1)	dp[i][j] = a[i][j];
			else if(i == 1)			dp[i][j] = dp[i][j - 1] + a[i][j];
			else if(j == 1)			dp[i][j] = dp[i - 1][j] + a[i][j];
			else                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1],dp[i-1][j-1]}) + a[i][j];
		}
	}
	cout << dp[n][m];
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		nhap();
		solve();
		cout << endl;

	}
	return 0;
}