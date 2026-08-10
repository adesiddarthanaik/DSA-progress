class Solution {
public:
    string removeStars(string s) {

        string stack;
        for(char ch : s){
            if(ch == '*'){
                stack.pop_back();
            }
            else{
                stack.push_back(ch);
            }
        }
        return stack;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna