#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int a[10] = {1000,500,200,100,50,20,10,5,2,1};
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ans = 0;
		for (int i = 0; i <= 9; ++i)
		{
			ans += n / a[i];
			n %= a[i];
		}
		cout << ans << endl;
	}	
	return 0;
}