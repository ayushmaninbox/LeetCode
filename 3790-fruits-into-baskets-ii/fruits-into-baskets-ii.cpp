class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<bool> used(fruits.size(), false);
        int not_placed = 0;
        for (int i = 0; i < fruits.size(); i++) {
            bool placed = false;
            for (int j = 0; j < fruits.size(); j++) {
                if (!used[j] && baskets[j] >= fruits[i]) {
                    used[j] = true;
                    placed = true;
                    break;
                }
            }
            if (!placed) {
                not_placed++;
            }
        }
        return not_placed;
    }
};