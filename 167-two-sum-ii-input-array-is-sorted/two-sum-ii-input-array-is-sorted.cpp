// 2- Pointers Method
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum < target) {
                l++;
            }
            else if (sum > target) {
                r--;
            }
            else {
                return {l + 1, r + 1};
            }
        }
        return {};
    }
};



// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> twoSums;
//         for (int i = 0; i < nums.size(); i++) {
//             twoSums[nums[i]] = i;
//         }

//         for (int i = 0; i < nums.size(); i++) {
//             int diff = target - nums[i]; 
//             if (twoSums[diff] && twoSums[diff] != i ) {
//                 return {i + 1, twoSums[diff] + 1};
//             }
//         }
//         return {};
//     }
// };