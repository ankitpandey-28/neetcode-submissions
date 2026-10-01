class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int left = 0;
         int right = n-1;
         int maxwater = 0;
         while(left < right){
            int w = right - left;
            int ht = min(heights[left] , heights[right]);
            int currwater = w*ht;
            maxwater = max(maxwater , currwater);
            heights[left]<heights[right] ? left++ : right--;
         }
         return maxwater;
    }
};
