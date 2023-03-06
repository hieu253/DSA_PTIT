#include<bits/stdc++.h>

using namespace std;

using ll = long long;

bool check(ll n){
	while(n){
		ll tmp = n % 10;
		if(tmp != 0 && tmp != 9)
			return false;
		n /= 10;
	}
	return true;
}
ll find(ll n){
	int  i = 1;
	while(!check(i*n)){
		i++;
	}
	return i*n;
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		ll  n; cin >> n;
		cout << find(n) << endl;
	}
	return 0;
}