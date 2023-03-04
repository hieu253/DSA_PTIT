#include<bits/stdc++.h>

using namespace std;
int n,a[i];
void next(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	a[i] = 1;
	for(int i = 1; i <= n; i++){
		cout << a[i];
	}
	cout  << endl;
}
int main()
{
	int t; cin >> t;
	while(t--){
	cin >> n;

	

}
	return 0;
}