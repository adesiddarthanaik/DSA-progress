class Solution {
public:
    bool judgeSquareSum(int c) {
        int left = 0;
        int right = sqrt(c);

        while (left <= right) {
            long long sum = 1LL * left * left + 1LL * right * right;

            if (sum == c) {
                return true;
            } 
            else if (sum < c) {
                left++;
            } 
            else {
                right--;
            }
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna