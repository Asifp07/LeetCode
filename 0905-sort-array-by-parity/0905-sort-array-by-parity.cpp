class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[left] % 2 == 0) {
                swap(nums[left], nums[right]);
                right++;
            }
            left++;
        }
        return nums;
    }
};