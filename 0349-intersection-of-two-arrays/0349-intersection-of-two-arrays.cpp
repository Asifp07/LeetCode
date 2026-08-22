class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> res;
        set<int> ans;
        set<int> num2 ;
        for(int i : nums2){
            num2.insert(i);
        }

        for (int i : nums1) {
            ans.insert(i);
        }

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