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

int minInsertions(string s) {
	int close = 0;
	int open = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			close += 2;
			if(close%2!=0){  
				open++;
				close--;
			}
		}
		else {
			close--;
			if (close < 0) {
				open++; 
				close+=2;//to set close to zero, eliminate the pair
			}
		}
	}
	return open +close;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << minInsertions(s);
	}
	return 0;
}