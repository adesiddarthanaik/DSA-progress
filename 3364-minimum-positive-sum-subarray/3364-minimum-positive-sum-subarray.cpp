class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        
        int minSum = INT_MAX;
        for(int i = l; i <= r; i++) {
            int currSum = 0;

            for(int j = 0; j < i; j++) {
                currSum += nums[j];
            }
            if(currSum > 0) {
                minSum = min(minSum, currSum);
            }

            int low = 0, high = i;

            while(high < nums.size()) {
                currSum -= nums[low];
                currSum += nums[high];

                low ++, high++;

                if(currSum > 0) {
                    minSum = min(minSum, currSum);
                }
            }
        }
        if(minSum == INT_MAX) return -1;
        return minSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna