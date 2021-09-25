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

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
	vector <int> ans;
	deque <int> mydeque;
	//manage first k numbers
	for (int i = 0; i < k; i++) {
		while (!mydeque.empty() && nums[i] > nums[mydeque.back()]) {
			mydeque.pop_back();
		}
		mydeque.push_back(i);
	}
	ans.push_back(nums[mydeque.front()]);
	 
	for (int i = k; i < nums.size() ; i++) {
		//remove element not in window
		while(!mydeque.empty() && mydeque.front()<=i-k){
			mydeque.pop_front();
		}
		//further shift the window and add new value
		while (!mydeque.empty() && nums[i] > nums[mydeque.back()]) {
			mydeque.pop_back();
		}
		mydeque.push_back(i);
		ans.push_back(nums[mydeque.front()]);
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		vector<int> nums;
		while (n--) {
			int num;
			cin >> num;
			nums.push_back(num);
		}
		nums = maxSlidingWindow(nums, k);
		for (auto x : nums) {
			cout << x << " ";
		}
	}
	return 0;
}