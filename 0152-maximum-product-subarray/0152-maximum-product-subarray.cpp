class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];
        int result = maxi;
        if(nums.size() == 0){
            return result;
        }
        for(int i=1 ; i<nums.size();i++){
            int num = max(nums[i] ,max(nums[i]*mini,nums[i]*maxi));
            int kum = min(nums[i] ,min(nums[i]*mini,nums[i]*maxi)); 

            maxi = num ;
            mini = kum;
            
            if(num > result){
                result =  num;
            }
        }
        return result; 
    }
};