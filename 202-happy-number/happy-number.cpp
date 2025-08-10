class Solution {
public:
    int getSum(int n) {
        int sum = 0;
        while (n) {
            int i = n % 10;
            sum += i * i;
            n /= 10; // n = n / 10
        }
        return sum;
    }

    bool isHappy(int n) {
        for (int i = 0; i < 10; i++) {
            if (n == 1) {
                return true;
            }
            n = getSum(n);
        }
        return false;
    }
};