class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // phle hm sort kar denge 
        int n = nums.size();
        for(int i = 1; i<n ; i++){   // fir hm compare karenge uske liye loop 0 ki jagah 1 se 
            if(nums[i]==nums[i-1]){   // fir compare karenge us element ke pervious wale se
                return true;  // agar rha to fir rturn true
            }
        }
        return false;           // time complexcity o(n)
    }
};