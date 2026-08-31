class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "AEIOUaeiou";
        int i = 0;
        int j = s.length()-1;
        while(i<j){
            if(vowels.find(s[i]) == string :: npos && vowels.find(s[j]) == string :: npos) i++,j--;
            else if(vowels.find(s[i]) == string :: npos && vowels.find(s[j]) != string :: npos) i++;
            else if(vowels.find(s[i]) != string :: npos && vowels.find(s[j]) == string :: npos)j--;
             else {
                swap(s[i],s[j]);
                i++,j--;
             }

        }
        return s;
    }
};