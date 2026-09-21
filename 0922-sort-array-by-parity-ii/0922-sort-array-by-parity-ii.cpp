class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j = 1;
        int i = 0;
        while(j < nums.size() && i<nums.size()){
            if(nums[i]%2 == 0) i+= 2;
            else if(nums[j]%2 != 0) j+= 2;
            else{
                swap(nums[i],nums[j]);
                j+=2;
                i+=2;
            }
            
        }

    return nums;
    }
};