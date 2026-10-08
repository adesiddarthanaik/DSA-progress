class Solution {
public:
    int countRotations(string s, int k) {
        
        int n = s.size();
        int total = 0;

        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) total++;
        }

        if(s[0] == s[n-1]) total++;

        if(k==total) return n-total;

        return k==total-1 ? total : 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna