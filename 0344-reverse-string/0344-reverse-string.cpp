class Solution {
public:
    void reverseString(vector<char>& s) {
        int start =0;
        int end = s.size()-1;

        while(start <=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna