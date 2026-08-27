class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = numbers.size()-1;
        int i = 0;
        while(j>=i){
            int ans = numbers[i]+numbers[j];
            if(target == ans ) return {i+1,j+1};
            else if(target > ans) i++;
            else j--;
        }
      return {};  
    }
};