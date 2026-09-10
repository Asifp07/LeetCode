class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       if(nums.size()<2) return false;
       map<int , int>mp;
       int sum = 0;
       for(int i = 0 ; i<nums.size();i++){
            sum += nums[i];
            if(sum % k == 0 && i>0) return true;
            int rem = sum % k;
            if(mp.find(rem) != mp.end() && (i-mp[rem])>1){
                return true;
            }
            if(mp.find(rem) == mp.end()){
                mp[rem] = i;
            }
       }
    return false;  
    }
};