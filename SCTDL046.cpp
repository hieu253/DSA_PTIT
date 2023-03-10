#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n,s,m; cin >> n >> s >> m;
		int a = s - s/7;
		if(n * a  < m *s){
			cout << "-1" << endl;
		}
		else{
			if((m * s) % n == 0)
				cout <<	 (s*m) /n << endl;
			else
				cout <<  (s*m) / n + 1 << endl;
		}

	}
	return 0;
}