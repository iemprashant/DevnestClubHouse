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
int countNegatives(vector<vector<int>>& grid) {
	int row = grid.size();
	int col=grid[0].size();
	int i = 0;
	int j = col- 1;
	int count=0;
	while (i <= row-1 && j >= 0) {
		if(grid[i][j]<0){
			count+=row-i;
			j--;
		}
		else {
			i++;
		}
	}
	return count;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<vector<int>>grid = {{5,1,0},{-5,-5,-5}};
		cout << countNegatives(grid);
	}
	return 0;
}