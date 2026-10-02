class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIdx = nums[0];

        for (int i = 0; i < nums.size(); ++i) {
            if (maxIdx >= nums.size() - 1) return true;

            if (nums[i] == 0 and maxIdx == i) return false;

            if (i + nums[i] > maxIdx) maxIdx = i + nums[i];
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna