class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        set<int> ans ;
        for( int i = 0; i<nums.size() ; i++){
            int j = 0;
            if(nums[i] == key) {
                j = i;
                for(int m = 0 ; m<nums.size(); m++){
                    if (abs(m-j) <= k) {
                        ans.insert(m);
                    }

                }
            }
        }
        vector<int> ans1(ans.begin(),ans.end());
        return ans1;
    }
};