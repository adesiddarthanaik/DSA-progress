class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n=nums.size();
        int l=0;
        int r=0;
        int ans=0;
        int pro=1;
        while(r<n){
            pro=pro*nums[r];
            while(pro>=k && l<=r){

                pro=pro/nums[l];

                l++;
            }
            ans=ans+(r-l+1);
            r++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna