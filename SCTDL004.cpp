#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int n,a[100 ],ok;
void ktao(){
	for (int i = 1; i <= n ; ++i)
	{
		a[i] = 0;
	}
}
void next(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
		return;
	}
	else a[i] = 1;
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n;
		ok = 1;
		ktao();
		while(ok){
			for (int i = 1; i <= n; ++i)
			{
				if(a[i]) cout << "B";
				else     cout << "A";
			}
			cout << ' '; 
			next();
		}
		cout << endl;
	}
	return 0;
}