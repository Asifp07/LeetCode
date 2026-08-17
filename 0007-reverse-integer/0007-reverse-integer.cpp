class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        int ld;
        while(x!=0){
            ld=x%10;
            rev = rev*10+ld;
            x=x/10;
        }
        if(rev <INT_MIN || rev>INT_MAX){
            return 0;
        }
        return (int)rev;
        
    }
};