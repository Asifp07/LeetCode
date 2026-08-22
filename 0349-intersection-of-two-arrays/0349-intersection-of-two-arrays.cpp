class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> res;
        set<int> ans(nums1.begin(),nums1.end());
        set<int> num2(nums2.begin(),nums2.end());
        for (int i : num2) {
            int j = ans.size();
            ans.insert(i);

            if (ans.size() == j) {
                res.insert(i);
            }
        }

        return vector<int>(res.begin(), res.end());
    }
};