class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        
        long long windowsum = 0;
        long long maxsum = 0 ;
        for(int i=0 ; i<k ; i++){
            windowsum = windowsum + nums[i];
            mp[nums[i]]++ ;
        }

        if(mp.size() == k){
            maxsum = windowsum ;
        }

        for(int j=k;j<nums.size(); j++){
            windowsum += nums[j];
            mp[nums[j]]++; 
            windowsum -= nums[j-k];
            mp[nums[j-k]]--;

            if(mp[nums[j-k]] == 0){
                mp.erase(nums[j-k]);
            }

            if (mp.size() == k) {
                maxsum = max(maxsum, windowsum);
            }
        }

        return maxsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna