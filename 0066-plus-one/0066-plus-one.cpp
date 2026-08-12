class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int i = digits.size();
    if (digits[i-1] != 9) {
        digits[i-1] += 1;
        return digits;
    }
    while(  i>0 && digits[i-1]==9){
        digits[i-1]=0;
        i--;
    }
    if(i==0) digits.insert(digits.begin(),1);
    else digits[i-1]+=1;


   return digits;
    }
};