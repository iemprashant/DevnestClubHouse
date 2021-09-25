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

string makeGood(string s) {
	stack<char> mystack;
	for (char c : s) {
		if (!mystack.empty() && (c + 32 == mystack.top() || c - 32 == mystack.top()) ) {
			mystack.pop();
		}
		else {
			mystack.push(c);
		}
	}
	s="";
	while (!mystack.empty()) {
		s = mystack.top() + s;
		mystack.pop();
	}
	return s;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << makeGood(s);
	}
	return 0;
}