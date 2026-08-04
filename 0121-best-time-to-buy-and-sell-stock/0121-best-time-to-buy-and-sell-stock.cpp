class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int profit = 0;

        for(int i=0; i<prices.size();i++){
            if(prices[i]-min <0){
                min  = prices[i];
            }
            profit = max(profit,prices[i]-min);
        }
        return profit;  
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna