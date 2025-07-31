
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int> s_hash, t_hash;
        for (int i = 0; i < s.size(); i++) {
            s_hash[s[i]]++;
            t_hash[t[i]]++;
        }
        return s_hash == t_hash;
    }
};



// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) return false;

//         sort(s.begin(), s.end());
//         sort(t.begin(), t.end());

//         return s == t;
//     }
// };



// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) return false;

//         // Adding the alphabets to the array
//         vector<char> arr1, arr2;
//         for (int i = 0; i < s.length(); i++) {
//             arr1.push_back(s[i]);
//         }
//         for (int i = 0; i < t.length(); i++) {
//             arr2.push_back(t[i]);
//         }

//         // Sorting the arrays
//         sort(arr1.begin(), arr1.end());
//         sort(arr2.begin(), arr2.end());

//         for (int i = 0; i < arr1.size(); i++) {
//             if (arr1[i] != arr2[i]) return false;
//         }
//         return true;
//     }
// };