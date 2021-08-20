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
        string ans="";
        map<int,string> mp;
        mp[1000]="M";
        mp[900]="CM";
        mp[500]="D" ;
        mp[400]="CD";
        mp[100]="C";
        mp[90]="XC";
        mp[50]="L";
        mp[40]="XL";
        mp[10]="X";
        mp[9]="IX";
        mp[5]="V" ;
        mp[4]="IV"; 
        mp[1]="I" ;
        mp[0]="0";
        for(auto i = mp.end(); i != mp.begin(); i--) {
            while(num >= i->first) {
                num = num - i->first;
                ans+=i->second;
            }
        }
        return ans;  
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