class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> twoSums;
        for (int i = 0; i < nums.size(); i++) {
            twoSums[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i]; 
            if (twoSums[diff] && twoSums[diff] != i ) {
                return {i, twoSums[diff]};
            }
        }
        return {};
    }
};