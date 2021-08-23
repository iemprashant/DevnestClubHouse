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
vector<string> findRepeatedDnaSequences(string s) {
	vector <string> ans;
	int n = s.length();
	unordered_map<string, int> map;
	string targetstring;
	for (int i = 0; i <= n - 10; i++) {
		map[ s.substr(i, 10)]++;
	}
	for (auto x : map) {
		if (x.second >=2) {
			ans.push_back(x.first);
		}
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		vector<string> dna = findRepeatedDnaSequences(s);
		for (auto it : dna) {
			cout << it << endl;
		}
	}
	return 0;
}