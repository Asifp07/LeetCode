class Solution {
public:
    int findLucky(vector<int>& arr) {
        int ans[501];
        for(int i : arr){
            ans[i]++;
        }
        for (int i = 500 ; i > 0 ; i-- ){
            if (ans[i] == i) return i;
        }  
        return -1;      
    }
};