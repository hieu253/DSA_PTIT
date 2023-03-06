#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		string ans = "";
		ans += s[0];
		for (int i = 1; i < s.size(); ++i)
		{
			if(s[i] != s[i-1]){
				ans += '1';
			}
			else
				ans += '0';
		}
		cout << ans << endl;
	}
	return 0;
}