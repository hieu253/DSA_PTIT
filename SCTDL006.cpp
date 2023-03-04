#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int n,ok,a[1005],cnt;

void ktao(){
	 cnt = 1;
	 a[1] = n;
}
void next(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int q = d / a[i];
		int r = d % a[i];
		if(q){
			for (int j = 1; j <= q; ++j)
			{
				cnt++;
				a[cnt] = a[i];
			}
		}
		if(r){
			cnt++;
			a[cnt] = r;
		}
	}
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n;
		ok = 1;
		ktao();
		while(ok){
			cout << '(';
			for (int i = 1; i <= cnt ; ++i)
			{
				cout << a[i];
				if(i == cnt) cout << ')';
			}
			next();
		}
		cout << endl;
	}
	return 0;
}