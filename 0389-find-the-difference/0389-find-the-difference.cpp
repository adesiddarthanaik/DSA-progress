class Solution {
public:
    char findTheDifference(string s, string t) {
        long long sum = 0, diff = 0;

        for (char c : t) {
            sum += c - 'a';
        }

        for (char c : s) {
            diff += c - 'a';
        }

        return char(sum - diff + 'a');
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna