#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int ok = 1,n,a[100];
string s;

void sinh(){
	int i = n - 1;
	while(i >= 0 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == -1){
		ok = 0;
		return;
	}
	a[i] = 1;

}
bool check(){
	for (int i = 0; i < n ; ++i)
	{
		if(s[i] != '?' && s[i] - '0' != a[i]){
			return false;
		}
	}
	return true;
}
int main(int argc, char const *argv[])
{
	int  t; cin >> t;
	cin.ignore();
	while(t--){
		getline(cin,s);
		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i] == ' '){
				s.erase(i,1);
			}
		}
		ok = 1;
		n = s.size();
		memset(a,0,sizeof(a));
		while(ok){
			if(check()){
				for (int i = 0; i < n; ++i)
				{
					cout << a[i];
				}
				cout << endl;
			}
			sinh();
		}
	}	
	return 0;
}