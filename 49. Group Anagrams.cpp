class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGrps;
        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            string key = word;
            sort(key.begin(), key.end());
            anagramGrps[key].push_back(word);
        }

        vector<vector<string>> result;

        vector<pair<string, vector<string>>> temp;
        for (auto i = anagramGrps.begin(); i != anagramGrps.end(); i++) {
            temp.push_back(make_pair(i -> first, i -> second));
        }

        for (int i = 0; i < temp.size(); i++) {
            result.push_back(temp[i].second);
        }

        return result;
    }
};