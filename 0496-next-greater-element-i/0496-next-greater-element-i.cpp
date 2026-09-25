class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {

            // Find position of nums1[i]
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);

            int a = it - nums2.begin();

            // Move to the right looking for greater element
            a++;

            while (a < nums2.size() && nums2[a] < nums1[i]) {
                a++;
            }

            if (a == nums2.size())
                ans.push_back(-1);
            else
                ans.push_back(nums2[a]);
        }

        return ans;
    }
};