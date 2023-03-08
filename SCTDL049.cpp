#include<bits/stdc++.h>

using namespace std;

using ll = long long;
int binarysearch(int a[],int n,int x){
	int left = 0,right = n-1;
	while(left <= right){
		int mid = (left + right) / 2;
		if(a[mid] == x){
			return mid +1;
		}
		else if(a[mid] < x){
			left  = mid + 1;
		}
		else
			right = mid - 1;
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k;
		int a[n+1];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		int  x = binarysearch(a,n,k);
		if(x != -1)	cout << x << endl;
		else cout  << "NO" << endl;
	}
	return 0;
}