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
int calPoints(vector<string>& ops) {
	int ans=0;
	stack<int>mystack;
	for(auto it:ops){
		if(it=="C"){
			ans-=mystack.top();
			mystack.pop();
		}
		else if(it=="D"){
			mystack.push(mystack.top()*2);
			ans+=mystack.top();
		}
		else if(it=="+"){
			int firstelement=mystack.top();
			mystack.pop();
			int pushelemmnt=firstelement+mystack.top();
			mystack.push(firstelement);
			mystack.push(pushelemmnt);
			ans+=mystack.top();
		}
		else{
			mystack.push(stoi(it));
			ans+=mystack.top();
		}
	}
	return ans;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<string>ops;
		int n;
		cin >> n;
		while (n--) {
			string s;
			cin >> s;
			ops.push_back(s);
		}
		cout<<calPoints(ops)<<endl;
	}
	return 0;
}