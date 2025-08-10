class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1; // initializing 2 pointers (l - left, r - right)
        while(l < r) {
            // skipping non alpha-num characters (like spaces, symbols, etc) from the left and right
            while(l < r && !isalnum(s[l])) { // isalnum - is Alpha-Numeric
                l++;
            }
            while(l < r && !isalnum(s[r])) {
                r--;
            }

            // forcefully lower casing and comparing
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }

            l++;
            r--;
        }
        return true;
    }
};