class Solution {
public:
    int findComplement(int num) {
        long powerof2s = 2, temp = num;
        
        while(temp>>1) {
            temp >>= 1;
            powerof2s <<= 1;
        }
        
        return powerof2s - num - 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna