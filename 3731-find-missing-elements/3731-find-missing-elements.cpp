class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<int> ans;
        int c = 0;
        for(int i = nums[0];i<=nums[n-1];i++){
            if (i != nums[c]) {
                ans.push_back(i);
                c--;

            }
            c++;
        }
        return ans;

        
    }
};