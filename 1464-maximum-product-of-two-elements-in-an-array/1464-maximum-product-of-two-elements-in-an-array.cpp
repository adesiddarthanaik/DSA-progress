class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN;
        int max2 = INT_MIN;
        for(int num :nums){
            if(num > max){
                max2 = max;
                max = num;
            }
            else if(num >max2){
                max2 = num;
            }
        }
        return (max-1)*(max2-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna