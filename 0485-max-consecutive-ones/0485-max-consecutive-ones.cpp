class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr_count =0;
        int max_count = 0 ;

        for(int j=0;j< nums.size();j++){
            if(nums[j] == 1){
                curr_count++;
            }
            else{
                max_count = max(max_count,curr_count);
                curr_count = 0 ;
            }
        }
        return max(curr_count,max_count);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna