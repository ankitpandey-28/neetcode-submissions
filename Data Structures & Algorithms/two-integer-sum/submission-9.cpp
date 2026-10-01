class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>> arr;

        // {value, original index}
        for (int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        sort(arr.begin(), arr.end());

        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {

            int sum = arr[left].first + arr[right].first;

            if (sum == target) {
                int i = arr[left].second;
                int j = arr[right].second;

                if (i < j)
                    return {i, j};
                else
                    return {j, i};
            }

            else if (sum < target) {
                left++;
            }

            else {
                right--;
            }
        }

        return {};
    }
};