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
int minimumTotal(vector<vector<int>>& triangle) {
	int n = triangle.size();
	vector<vector<int> > dp( n , vector<int> (n, 0));
	int minimumans=INT_MAX;
	dp[0][0]=triangle[0][0];
	for ( int i = 1; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if(j==0){
				dp[i][0]=triangle[i][0]+ dp[i-1][0];
			}
			else if (j==i){
				dp[i][i]=triangle[i][i]+ dp[i-1][i-1];
			}
			else{
				dp[i][j]=triangle[i][j]+ min(dp[i-1][j-1],dp[i-1][j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		minimumans=min(minimumans,dp[n-1][i]);
	}
	return minimumans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<vector<int>>triangle;
		for ( int i = 0; i < n; i++) {
			vector<int> temp;
			int j = i + 1;
			int num;
			while (j--) {
				cin >> num;
				temp.push_back(num);
			}
			triangle.push_back(temp);
		}
		cout << minimumTotal(triangle);

	}
	return 0;
}