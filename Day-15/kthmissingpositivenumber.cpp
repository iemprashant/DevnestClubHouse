#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod = 1e9 + 7 ;
#define vi vector<int>
#define vs vector < string >
#define vll vector<ll>
#define vvi vector < vi >
#define pb push_back
#define pii pair<int,int>
#define pll pair<long long, long long>
#define rep(i,n) for (ll i = 0; i < n; ++i)
#define REP(i,k,n) for (ll i = k; i <= n; ++i)
#define REPR(i,k,n) for (ll1i = k; i >= n; --i)
int findKthPositive(vector<int>& arr, int k) {
	int n = arr.size();
	int i = 0;
	int num = 1;
	while (k > 0 && i<n) {
		(arr[i] == num) ? i++ : k--;
		num++;
	}
	while(k>0){
		num++;
		k--;
	}
	return num - 1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<int>arr = {1, 2, 3, 4};
		int k = 2;
		cout << findKthPositive(arr, k);
	}
	return 0;
}