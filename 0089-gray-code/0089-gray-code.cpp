class Solution {
public:
    vector<int> grayCode(int n) {
        if(n == 0)
            return {0};
        vector<int> ans = grayCode(n-1);
        for(int i=ans.size()-1; i>=0; i--){
            ans.push_back(ans[i]+(1<<(n-1)));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna