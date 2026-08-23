class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = INT_MIN;
        int mul = 1;

        for(int i = 0; i<nums.size();i++){
            mul *= nums[i];
            if(mul > max) max = mul;
            if(mul == 0) mul = 1;  
        }

        mul =1;
        for(int i = nums.size()-1;i>=0;i--){
            mul *= nums[i];
            if(mul>max) max = mul;
            if(mul == 0) mul = 1;
        }

     return  max; 
    }
};