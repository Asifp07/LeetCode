class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> ans(nums.begin(),nums.end());
        int count = k;
        for(int i : ans){
            if( i % k == 0 && i != count ) return count;
            else if (i % k == 0 && i == count) count += k;

        }
        return count ;
    }
};