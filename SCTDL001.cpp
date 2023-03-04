#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int ok = 1,n,a[100];

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0){
		ok = 0;
		return;
	}
	a[i] = 1;

}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		ok = 1;
		cin >> n;
		memset(a,0,sizeof(a));
		while(ok){
			for (int i = 1; i <= n; ++i)
			{
				cout << a[i] << ' ';
			}
			cout << endl;
			sinh();
		}


	}

	return 0;
}