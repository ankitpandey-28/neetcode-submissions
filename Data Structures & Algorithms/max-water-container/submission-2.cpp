class Solution {
public:
    int maxArea(vector<int>& heights) {
      int n = heights.size();
      int left = 0;
      int right = n-1;
      int maxWater = 0;
      while(left<right){
        int w = right - left;
        int h = min(heights[left], heights[right]);
        int currwater = w*h;
        maxWater = max(maxWater , currwater);
        if(heights[left]<heights[right]){
            left++;
        }
        else{
            right--;
        }
      } 
      return maxWater; 
    }
};
