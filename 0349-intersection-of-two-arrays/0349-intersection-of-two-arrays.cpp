class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>sol;
        set<int> ans(nums1.begin(),nums1.end());
        set<int> num2(nums2.begin(),nums2.end());
        for (int i : num2) {
            int j = ans.size();
            ans.insert(i);

            if (ans.size() == j) {
                sol.push_back(i);
            }
        }

        return sol;
    }
};