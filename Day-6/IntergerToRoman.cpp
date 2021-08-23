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

string intToRoman(int num) {
	string s = "";
	vector<pair<int, string> > arr;
	arr = { { 1, "I"}, {4, "IV"}, { 5, "V"}, {9, "IX"} ,{10, "X" },
		{ 40, "XL"}, { 50, "L"}, { 90, "XC"}, { 100, "C"}, { 400, "CD"}, { 500, "D"}, { 900, "CM"}, { 1000, "M"}
	};
	for (int i = 12; i >= 0; i--) 
	{
		if (num >= arr[i].first) {
			int digit = num / arr[i].first;
			while (digit--) {
				s += arr[i].second;
			}
			num = num % arr[i].first;
		}
	}
	return s;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int num;
		cin >> num;
		cout << intToRoman(num) << endl;
	}

}