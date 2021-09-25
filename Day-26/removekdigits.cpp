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
string removeKdigits(string num, int k) {
	int n = num.length();
	// Corner case when we need to remove all the characters then the answer is 0.
	if (n == k)
	{
		return "0";
	}
	stack <char>mystack;
	//push elements to stack with compare
	for (char c : num) {
		//finding and removing the peak
		while (!mystack.empty() && k > 0 && mystack.top() > c) {
			mystack.pop();
			k--;
		}
		
		if (mystack.empty() && c == '0') {
			continue;
		}
		mystack.push(c);
	}
	//there is case when we have we didnt get any peak all was in ascending order
	//so we will remove digits from last
	while (!mystack.empty() && k--) {
		mystack.pop();
	}
	if (mystack.empty()) {
		return "0";
	}
	while (!mystack.empty()) {
		num[n-1]=mystack.top();
		n--;
		mystack.pop();
	}

	return num.substr(n);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int k;
		cin >> k;
		cout << removeKdigits(s, k);

	}
	return 0;
}