class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> hash;
        for (int i : nums) {
            hash[i]++;
        }

        nums.clear();
        for (auto &p : hash) {
            nums.push_back(p.first);
        }
        sort(nums.begin(), nums.end());
        return nums.size();
    }
};