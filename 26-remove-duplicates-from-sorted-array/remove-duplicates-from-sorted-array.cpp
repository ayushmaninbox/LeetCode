class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int w = 1;
        for (int r = 1; r < nums.size(); r++) {
            if (nums[r] != nums[r - 1]) {
                nums[w] = nums[r];
                w++;
            }
        }
        return w;
    }
};



// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         unordered_map<int, int> hash;
//         for (int i : nums) {
//             hash[i]++;
//         }

//         nums.clear();
//         for (auto &p : hash) {
//             nums.push_back(p.first);
//         }
//         sort(nums.begin(), nums.end());
//         return nums.size();
//     }
// };