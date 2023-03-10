#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n],b[m];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		for (int i = 0; i < m; ++i)
		{
			cin >> b[i];
		}
		int i=0,j=0;
		vector<int> v1,v2;
		while(i < n && j < m){
		    if(a[i] == b[j]){
		    	v1.push_back(a[i]);
		    	v2.push_back(a[i]);
		    	i++;
		    	j++;
		    }
		    else if(a[i]  < b[j]){
		    	v1.push_back(a[i]);
		    	i++;
		    }
		    else{
		    	v1.push_back(b[j]);
		    	j++;
		    }
		}
		while(i < n){
			v1.push_back(a[i]);
			i++;
		}
		while(j < m){
			v1.push_back(b[j]);
			j++;
		}
		for (int i = 0; i < v1.size(); ++i)
		{
			cout << v1[i] << ' ';

		}
		cout << endl;
		for (int i = 0; i < v2.size(); ++i)
		{
			cout << v2[i] << ' ';
		}
		cout << endl;

	}
	return 0;
}