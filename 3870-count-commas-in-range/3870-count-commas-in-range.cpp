class Solution {
public:
    int countCommas(int n) {
          n -= 999;
          if(n>0) return n;
          return 0;
        
    }
};