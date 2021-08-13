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
#define REPR(i,k,n) for (ll i = k; i >= n; --i)
int threeSumClosest(vector<int>& nums, int target) {
	sort(nums.begin(), nums.end());
	int n = nums.size();
	int sum = 0;
	int closesum = -1000;
	int i, j;
	for (int k = 0; k < n; k++) {
		i = k+1;
		j = n - 1;
		while (i < j) {
			sum = nums[i] + nums[j] + nums[k]; 
			if(sum==target){
				return sum;
			}
			if (abs(target - sum)<=abs(target - closesum) ) {
				closesum = sum;
			}
			(sum > target) ? j-- : i++;

		}
	}
	return closesum;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int>nums;
		int num;
		for (int i = 0; i < n; i++) {
			cin >> num;
			nums.push_back(num);
		}
		int target;
		cin >> target;
		cout << threeSumClosest(nums, target) << endl;
	}
	return 0;
}