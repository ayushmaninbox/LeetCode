class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        vector<pair<int, int>> freqArray;
        for (auto i = freq.begin(); i != freq.end(); i++) {
            freqArray.push_back(make_pair(i -> first, i -> second));
        }

        sort(freqArray.begin(), freqArray.end(), [](pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        });

        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(freqArray[i].first);
        }

        return res;
    }
};