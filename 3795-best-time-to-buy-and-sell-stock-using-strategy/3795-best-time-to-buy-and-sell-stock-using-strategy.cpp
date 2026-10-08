class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) 
    {
        int n = prices.size();
        vector<long long> pro_sum(n + 1 , 0);
        vector<long long> pri_sum(n + 1 , 0);

        for(int i = 0 ; i < n ; i++)
        {
            pro_sum[i + 1] = pro_sum[i] + (long long) prices[i] * strategy[i];
            pri_sum[i + 1] = pri_sum[i] + prices[i];
        }
        
        long long Max = pro_sum[n];

        for(int i = 0 ; i + k <= n ; i++)
        {
            long long old_gain = pro_sum[i + k] - pro_sum[i];
            
            long long new_gain = pri_sum[i + k] - pri_sum[i + k / 2];
            
            Max = max(Max , pro_sum[n] + (new_gain - old_gain)); 
        }
        return Max;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna