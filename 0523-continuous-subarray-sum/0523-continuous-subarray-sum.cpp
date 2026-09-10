class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       if(nums.size()<2) return false;
       unordered_map<int , int>mp;
       int sum = 0;
       mp[0] = -1;
       for(int i = 0 ; i<nums.size();i++){
            sum += nums[i];
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