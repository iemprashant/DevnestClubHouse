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

//For every element we will try to find the best ans, i.e. considering every ith element as minimum, how much we can extend the subarray to left and right ?
// This made me to find left and right minimum

// Now we can find the subarray sum between left min and right min index, how to optimise this ?
// This made me to go for prefix sum.
int maxSumMinProduct(vector<int>& nums) {
	int n = nums.size();
	long long  maxproduct = 0;
	stack<int>mystack;
	vector<int>leftmin(n, -1);
	vector<int>rightmin(n, n);
	vector<long long>prefixsum(n, 0);
	//calcualte prefix sum
	prefixsum[0] = nums[0];
	for (int i = 1; i < n; i++) {
		prefixsum[i] = prefixsum[i - 1] + nums[i];
	}
	//calculate left min
	mystack.push(0);
	for (int i = 1; i < n; i++) {
		while (!mystack.empty() && nums[i] <= nums[mystack.top()]) {
			mystack.pop();
		}
		if (!mystack.empty()) {
			leftmin[i] = mystack.top();
		}
		mystack.push(i);
	}
	//clear stack
	while (!mystack.empty()) {
		mystack.pop();
	}
	//calculate right min
	mystack.push(n - 1);
	for (int i = n - 2; i >= 0; i--) {
		while (!mystack.empty() && nums[i] <= nums[mystack.top()]) {
			mystack.pop();
		}
		if (!mystack.empty()) {
			rightmin[i] = mystack.top();
		}
		mystack.push(i);
	}
	// calcluate mimumsubraay for every element and keep record for max product
	for (int i = 0; i < n; i++) {
		//if start to right min
		long long temp=(prefixsum[rightmin[i] - 1]);
		//if left limit is set
		if(leftmin[i]!=-1){
			temp= prefixsum[rightmin[i] - 1]- prefixsum[leftmin[i]];
		}
		maxproduct=max(maxproduct,temp*nums[i]);
	}
	maxproduct%=1000000007;
	return maxproduct;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> nums;
		while (n--) {
			int num;
			cin >> num;
			nums.push_back(num);
		}
		cout << maxSumMinProduct(nums);
	}
	return 0;
}