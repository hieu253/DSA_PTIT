#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int n,a[100],ok;

void next(){
	int i = n - 2;
	while(i >= 0 &&	a[i] > a[i+1]){
		i--;
	}
	if(i == -1){
		ok = 0;
	}
	else{
		int j = n - 1;
		while(a[i] > a[j]){
			j--;
		}
		swap(a[i],a[j]);
		reverse(a + i + 1,a + n);
		for (int k = 0; k < n; ++k)
		{
			cout << a[k] << ' ';

		}
	}
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		next();
		cout << endl;
	}
	return 0;
}