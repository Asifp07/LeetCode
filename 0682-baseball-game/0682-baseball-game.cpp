class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> nums;

        for (string s : operations) {

            int n = nums.size() - 1;

            if (s != "+" && s != "D" && s != "C") {
                int num = stoi(s);
                nums.push_back(num);
            }

            else if (s == "+") {
                nums.push_back(nums[n - 1] + nums[n]);
            }

            else if (s == "D") {
                nums.push_back(nums[n] * 2);
            }

            else if (s == "C") {
                nums.pop_back();
            }
        }

        int ans = 0;

        for (int i : nums) {
            ans += i;
        }

        return ans;
    }
};