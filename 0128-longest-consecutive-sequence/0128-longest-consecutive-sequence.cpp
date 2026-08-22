class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        set<int>ans;
        for(int a: nums){
            ans.insert(a);
        }
        nums.erase(nums.begin(),nums.end());
        for(int a : ans){
            nums.push_back(a);
        }
        int count = 1;
        int sec = 0;
        for(int i = 0;i<nums.size()-1;i++){
            if(nums[i]+1 != nums[i+1] ){
                if(count > sec) sec = count;
                count = 1;
            }
            else if(nums[i]+1 == nums[i+1]) count ++;
            
        }

      return max(sec,count);  
    }
};