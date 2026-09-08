class Solution {
public:
    int romanToInt(string s) {
       int num = 0;
       vector<string> sub = {"IV","IX","XL","XC","CD","CM"};
       vector<int> value = {4,9,40,90,400,900};
       for(int i=0;i<sub.size();i++){
        size_t pos = s.find(sub[i]);

        if (pos != string::npos) {
            s.erase(pos, 2);
            num += value[i];

        }
       }
        for(int i = 0 ; i<s.size();i++){
            if(s[i]=='I') num += 1;
            else if(s[i]=='V') num += 5;
            else if(s[i]=='X') num += 10;
            else if(s[i]=='L') num+= 50;
            else if(s[i]=='C') num += 100;
            else if(s[i]=='D') num += 500;
            else if(s[i]=='M') num+= 1000;
        }
        
     return num;   
        
    }
};