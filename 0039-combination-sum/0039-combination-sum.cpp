class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<vector<int>>> dp(target + 1);

        dp[0] = {{}};

        for (int coin : candidates) {
            for (int i = coin; i <= target; i++) {
                for (auto comb : dp[i - coin]) {
                    comb.push_back(coin);
                    dp[i].push_back(comb);
                }
            }
        }

        return dp[target];
    }
};