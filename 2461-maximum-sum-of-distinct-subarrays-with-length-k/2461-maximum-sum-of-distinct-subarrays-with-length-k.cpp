class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> set;

        long long sum = 0;
        long long maxsum = 0;

        int left = 0 ;

        for(int right = 0;right <nums.size() ; right++){
            while(set.count(nums[right])){
                set.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            set.insert(nums[right]);
            sum += nums[right];

            if(right -left+1 == k){
                maxsum = max(maxsum,sum);
                set.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
        }
        return maxsum ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna