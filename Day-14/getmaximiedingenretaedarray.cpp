#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int getMaximumGenerated(int n) {
	int dp[n + 2];
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 1; i <= n / 2; i++) {
		dp[2 * i] = dp[i];
		dp[(2 * i) + 1] = dp[i]+dp[i+1];

	}
	for (int i = 0; i <=n; i++) {
		cout<<dp[i]<<" ";
	}
	return *max_element (dp, dp + n+1);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << getMaximumGenerated(n);
	}
	return 0;
}