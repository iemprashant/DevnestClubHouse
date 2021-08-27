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
vector<vector<string>> groupAnagrams(vector<string>& strs) {
	map <int,vector<string>> mymap;
	for(auto i:strs){
		long long sum=0;
		for(auto j:i){
			sum+=(j*j*j*j)%mod;
		}
		mymap[sum].push_back(i);
	}
	vector<vector<string>> ans;
	for(auto i:mymap){
		ans.push_back(i.second);
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
		vector<vector<string>> allSetToAnagram = groupAnagrams(strs);
		for (auto i : allSetToAnagram)
		{
			for (auto j : i)
			{
				cout << j << " ";
			}
			cout << endl;
		}
	}
	return 0;
}