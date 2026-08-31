class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        map<char,int> freq1;
        map<char,int> freq2;
        for (int i = 0 ;i<s.length();i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }
        if(freq1 == freq2) return true;
        return false;
      
        
    }
};