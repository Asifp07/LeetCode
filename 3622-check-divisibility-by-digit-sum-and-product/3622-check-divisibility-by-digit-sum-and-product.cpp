class Solution {
public:
    bool checkDivisibility(int n) {
        int m = n;
        int sum = 0;
        int pro = 1;
        while(m>0){
            sum += m%10;
            pro *= m%10;
            m /= 10;
        }
        if(n %(sum+pro) != 0) return false;
        return true;
        
    }
};