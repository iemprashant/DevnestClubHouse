class Solution {
    vector <int> inital;
public:
    Solution(vector<int>& nums) {
        inital=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return inital;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector <int> temp=inital;
        for(int i=0;i<temp.size();i++){
            swap(temp[i],temp[rand()%temp.size()]);
        }
        return temp;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */