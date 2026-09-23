class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int start=0;
        int end=n-1;
        
        vector <int> res(n);
        int pos = n-1;
        
        while(start <= end)
        {
            if(abs(nums[start]) < abs(nums[end])) {
                res[pos--] = nums[end] * nums[end];
                end--;
            } else{
                res[pos--] = nums[start] * nums[start];
                start++;
            }
        }
        return res;
    }
    };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna