class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int count = 0;
        for (int i : nums){
            if(i != 0) prod *= i;
            else count++;        
            
        }
        if(count > 1) {
            fill(nums.begin(),nums.end(),0);
        }
        else if (count == 1){
            for(int i =  0 ; i<nums.size();i++){
                if (nums[i] != 0) nums[i] =  0;
                else nums[i] = prod;
            }
        }
        else {
            for(int i = 0; i<nums.size();i++){
                nums[i] = prod / nums[i];
            }
        }
        return nums;
        
    }
};