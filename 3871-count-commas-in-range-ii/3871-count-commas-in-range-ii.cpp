class Solution {
public:
    long long countCommas(long long n) {
       long cur = 1000;
       long res = 0;
       while(n >= cur){
            res += (n-cur + 1);
            cur *= 1000;
       }
    return res;
    }
};