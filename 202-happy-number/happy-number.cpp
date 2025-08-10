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
        for (int i = 0; i < 10; i++) { // Check below for explanation about "i < 10"
            if (n == 1) {
                return true;
            }
            n = getSum(n);
        }
        return false;
    }
};

// Why 10 iterations is enough
// This works because:

// The sum of squares of digits for any positive integer eventually drops to a number ≤ 243.
// (Reason: largest case is 9999999 → 9² * 7 = 567)

// Once numbers are small, either:

// You hit 1, or

// You fall into the well-known unhappy cycle:
// 4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4

// This cycle length is tiny compared to 10 iterations, so you’re guaranteed to decide before 10 steps.