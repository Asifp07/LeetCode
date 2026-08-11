class Solution {
public:
    bool rotateString(string s, string goal) {
      if(s.length() != goal.length()) return false;
      int n = s.length()-1;
      for(int i=0;i<=n;i++){
          if(goal == s) return true;
          s.insert(s.begin(),s[n]);
          s.pop_back();
      }
      return false;
        
    }
};