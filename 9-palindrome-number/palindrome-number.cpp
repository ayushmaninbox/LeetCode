class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int rev = 0;
        while (x > rev) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return x == rev || x == rev / 10; 
    }
};



// class Solution {
// public:
//     bool isPalindrome(int x) {
//         string s = to_string(x);
//         string rev = s;
//         reverse(rev.begin(), rev.end());
//         return s == rev;
//     }
// };