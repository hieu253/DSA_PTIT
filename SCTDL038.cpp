#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int benhat(string a,string b){
	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i] == '5')		a[i] = '3';
	}
	for (int i = 0; i < b.size(); ++i)
	{
		if(b[i] == '5')		b[i] = '3';
	}
	return stoi(a) + stoi(b);
}
int lonnhat(string a,string b){
	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i] == '3')		a[i] = '5';
	}
	for (int i = 0; i < b.size(); ++i)
	{
		if(b[i] == '3')		b[i] = '5';
	}
	return stoi(a) + stoi(b);
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		cout << benhat(a,b) << ' ' << lonnhat(a,b) ;
		cout << endl;
	}
	return 0;
}