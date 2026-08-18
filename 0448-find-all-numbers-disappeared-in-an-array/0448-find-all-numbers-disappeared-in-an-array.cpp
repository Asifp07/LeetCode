class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       // Mark numbers that are present
       vector<int>ans;
    for (int i = 0; i < nums.size(); i++) {
        int x = abs(nums[i]);
        nums[x - 1] = -abs(nums[x - 1]);
    }


    // Positive values represent missing numbers
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            ans.push_back(i + 1);
        }
    }


    return ans;
}
};                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          