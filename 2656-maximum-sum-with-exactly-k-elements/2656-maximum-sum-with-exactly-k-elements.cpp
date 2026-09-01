class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = nums[nums.size()-1]*k;
        for(int i = 1;i<k;i++){
            ans += i;

        }
        return ans;
        
    }
};