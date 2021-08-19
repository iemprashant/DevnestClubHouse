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
int FreqOfMaxLen(vector <int> &arr)
{
	int n = arr.size();
	int max_len = 0;
	unordered_map<int, int> hash;
	for (int i = 0; i < n; i++)
	{
		max_len = max(max_len , arr[i]);
		hash[arr[i]]++;
	}
	return hash.at(max_len);
}
int countGoodRectangles(vector<vector<int>>& rectangles) {
	vector <int> arr;
	int n = rectangles.size();
	for (int i = 0; i < n; i++) {
		arr.push_back(min(rectangles[i][0], rectangles[i][1]));
	}
	return FreqOfMaxLen(arr);
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<vector<int>> rectangles;
		for (int i = 0; i < n; i++) {
			vector <int>rect;
			int num;
			cin >> num;
			rect.push_back(num);
			cin >> num;
			rect.push_back(num);
			rectangles.push_back(rect);
		}
		cout << countGoodRectangles(rectangles) << endl;
	}
	return 0;
}