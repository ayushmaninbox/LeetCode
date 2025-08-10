class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;
        for (char ch : s) {
            count[ch]++;
        }

        int len = 0;
        bool odd = false;

        for (auto &n : count) {
            len += (n.second / 2) * 2;
            if (n.second % 2 == 1 && odd == false) {
                odd = true;
                len++;
            }
        }

        return len;
    }
};