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
vector<vector<int>> generate(int n) {
        vector<vector<int>> pascaltriangle;
        pascaltriangle.push_back({1});
        for(int i=1;i<n;i++){
        	vector<int> temp;
        	for(int j=0;j<=i;j++){
        		if(j==0|| j==i){
        			temp.push_back(1);
        		}
        		else{
        			temp.push_back(pascaltriangle[i-1][j]+pascaltriangle[i-1][j-1]);
        		}
        	}
        	pascaltriangle.push_back(temp);
        }
        return pascaltriangle;
    }
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<vector<int>>ans=generate(n);
		for(auto x:ans){
			for(auto y:x){
				cout<<y<<" ";
			}
			cout<<endl;
		} 
		
}
return 0;
}