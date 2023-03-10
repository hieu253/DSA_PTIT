#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int x,n;
bool cmp(int a,int b){
	return abs(x-a)  < abs(x-b);
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n >> x;
		int a[n+1];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		sort(a,a+n,cmp);
		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << ' ';
		}
		cout << endl;
	}
	return 0;
}