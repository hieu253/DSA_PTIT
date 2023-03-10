#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n+1];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		sort(a,a+n,greater<int>());
		vector<int> v;
		for (int i = 0; i < n/2 ; ++i)
		{
			v.push_back(a[i]);
			v.push_back(a[n-i-1]);
		}
		if(n % 2 != 0){
			v.push_back(a[n/2]);
		}
		for (int i = 0; i < n; ++i)
		{
			cout << v[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}