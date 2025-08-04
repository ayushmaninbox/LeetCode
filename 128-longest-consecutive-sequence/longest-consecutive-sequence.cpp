
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for(auto& n : s)
        {
            if(s.find(n - 1) == s.end())
            {
                int cur = n;
                int count = 1;

                while(s.count(cur + 1)){
                    cur++;
                    count++;
                }
                longest = max(longest, count);
            }
        }
        return longest;
    }
};



// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         if (nums.empty()) return 0;
//         sort(nums.begin(), nums.end());
//         int n = 1, current = 1;
//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] == nums[i - 1]) {
//                 continue;
//             }
//             if (nums[i] == nums[i - 1] + 1) {
//                 current++;
//             }
//             else current = 1;
//             n = max(current, n);
//         }
//         return n;
//     }
// };