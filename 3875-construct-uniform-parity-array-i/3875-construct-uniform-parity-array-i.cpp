class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        if(nums1.size()== 1) return true;
        int count = 0;
        for(int i : nums1){
            if (i%2 == 1) count++;
    
        }
        if (count == nums1.size() || count == 0) return true;
        return true;

        
    }
};