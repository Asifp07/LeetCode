class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        sort(nums.begin(),nums.end());
        while(nums.size()>1){
           int i = 0;
           if(nums[i]!= nums[i+1]) return nums[i];
           if(nums.back()!= nums[nums.size()-2]) return nums.back();
           nums.erase(nums.begin(),nums.begin()+2);
           nums.erase(nums.end()-2,nums.end());

        }
  return 0;
    }
};