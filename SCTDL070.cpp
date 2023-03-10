#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int c,n; cin >> c >> n;
		int w[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> w[i];
		}
		bool dp[c + 1];
		memset(dp,false,sizeof(dp));
		dp[0] = true;
		for (int i = 0; i < n; ++i)
		{
			for (int j = c; j >= w[i]; j--)
			{
				if(dp[j-w[i]]){
					dp[j] = true;
				}
			}
		}
		for (int i = c; i >= 1 ; --i)
		{
			if(dp[i])
			{
				cout << i << endl;
				break;
			}
		}
	}	
	return 0;
}