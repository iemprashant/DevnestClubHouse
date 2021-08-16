class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int currentmin=nums[0],minsum=nums[0];
        int currentmax=nums[0],maxsum=nums[0];
        for(int i=1;i<n;i++){
           currentmin=min(currentmin+nums[i],nums[i]);
           minsum=min(minsum,currentmin);
           currentmax=max(currentmax+nums[i],nums[i]);
           maxsum=max(maxsum,currentmax);
        }
        if(minsum==sum){
            return maxsum;
        }
        return max(maxsum,sum-minsum);
    }
};