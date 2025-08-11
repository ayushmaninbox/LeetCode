class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i+j] == needle[j]) {
                j++;
            }
            while (j == m) {
                return i;
            }
        }
        return -1;
    }
};



// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         return haystack.find(needle);
//     }
// };