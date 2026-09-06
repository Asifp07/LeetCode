class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int x1 = 0;
      for(int i = 0;i<=nums.size();i++){
        x1 ^= i;
      }
      int x2 = 0;
      for(int i:nums){
        x2 ^= i;
      }
      return x1^x2;
        
    }
};