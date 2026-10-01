class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int cursum = 0;
        int maxsum = nums[0];
        for(int i = 0; i<n ; i++){
            if(cursum<0){
                cursum = 0;
            }
            cursum = cursum + nums[i];
            maxsum = max(cursum , maxsum);
        }
        return maxsum;
    }
};
