class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int nnbuy = 0;

        int nbuy = 0;

        int afternbuy = 0;

        int currbuy = 0;
        int currnotbuy = 0;

        for(int i = n - 1; i >= 0; i--)
        {
            for(int buy = 0; buy <= 1; buy++)
            {
                if(buy)
                {
                    currbuy = max(
                        -prices[i] + nnbuy,
                        nbuy
                    );
                }
                else
                {
                    currnotbuy = max(
                        prices[i] + afternbuy,
                        nnbuy
                    );
                }
            }
            afternbuy = nbuy;
            nbuy = currbuy;
            nnbuy = currnotbuy;
        }

        return nbuy;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna