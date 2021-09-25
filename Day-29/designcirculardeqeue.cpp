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
class MyCircularQueue {
public:
    vector<int> v;
    int k;
    MyCircularQueue(int k) {
        this->k=k;
    }
    
    bool enQueue(int value) {
        if(v.size()<k){
            v.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(v.size()){
            v.erase(v.begin());
            return true;
        }
        return false;
    }
    
    int Front() {
        return v.size()?v[0]:-1;
    }
    
    int Rear() {
        return v.size()?v[v.size()-1]:-1;
    }
    
    bool isEmpty() {
        return v.empty();
    }
    
    bool isFull() {
        return v.size()==k;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
int main(){
    int t;
    cin>>t;
    while(t--){
        
        
}
return 0;
}