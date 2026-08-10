class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int satisfied = 0;
        sort(g.begin() , g.end());
        sort(s.begin(),  s.end());
        int i = 0;
        int j = 0;
        while(i < g.size() && j < s.size()){
            if(s[j] >= g[i]){
                satisfied++;
                i++;
                j++;
            }
            else{
                j++;
            }
            
        }
        return satisfied;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna