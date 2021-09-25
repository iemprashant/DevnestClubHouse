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
int firstUniqChar(string s) {
	unordered_map<char,int> mymap;
	for(char c:s){
		mymap[c]++;
	}
	for(int i=0;i<s.size();i++){
		if(mymap[s[i]]==1){
			return i;
		}
	}
	return -1;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout<<firstUniqChar(s)<<endl;
	}
	return 0;
}