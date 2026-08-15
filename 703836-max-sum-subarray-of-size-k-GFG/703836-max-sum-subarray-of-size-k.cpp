class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int windowsum = 0 ;
        
        for(int i=0 ; i< k;i++){
            windowsum = windowsum + arr[i];
        }
        
        int maxsum = windowsum ;
        
        for(int j=k ;j<arr.size() ; j++){
            windowsum += arr[j];
            windowsum -= arr[j-k];
            
            maxsum = max(windowsum , maxsum);
            
        }
        
        return maxsum ;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna