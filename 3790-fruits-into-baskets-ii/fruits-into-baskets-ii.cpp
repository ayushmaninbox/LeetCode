class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size(), alloted = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (fruits[i] <= baskets[j]) {
                    baskets[j] = -1;
                    alloted++;
                    break;
                }
            }
        }
        return n - alloted;
    }
};



// class Solution {
// public:
//     int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
//         vector<bool> used(fruits.size(), false);
//         int not_placed = 0;
//         for (int i = 0; i < fruits.size(); i++) {
//             bool placed = false;
//             for (int j = 0; j < fruits.size(); j++) {
//                 if (!used[j] && baskets[j] >= fruits[i]) {
//                     used[j] = true;
//                     placed = true;
//                     break;
//                 }
//             }
//             if (!placed) {
//                 not_placed++;
//             }
//         }
//         return not_placed;
//     }
// };