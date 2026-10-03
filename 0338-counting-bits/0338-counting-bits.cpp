class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> t(n+1);  
        t[0] = 0;
        for(int i = 1; i<=n; ++i)
            t[i] = t[i/2] + i%2;
        
        return t;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna