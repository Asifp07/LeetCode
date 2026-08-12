class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(char ch : s){
            if(isdigit(ch)) a += ch;
            else if (isalpha(ch)) {
                ch = tolower(ch);
                a += ch;
            }
        }

        string rev = a;
        reverse(rev.begin(),rev.end());
        if(a==rev) return true;
        return false;
        
    }
};