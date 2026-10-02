class Solution {
public:
    std::vector<int> getRow(int rowIndex) {
        std::vector<int> res(1, 1);
        long long prev = 1;
        for(int k = 1; k <= rowIndex; k++) {
            long long next_val = prev * (rowIndex - k + 1) / k;
            res.push_back(next_val);
            prev = next_val;
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna