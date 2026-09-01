class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
   for(int i = 0 ; i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            arr.erase(arr.begin()+(i+1));
            i -= 1;
        }
   }
   return arr.size();
    }
};