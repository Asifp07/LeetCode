class Solution {
public:
    string longestCommonPrefix(vector<string>& strgs) {
    
    if(strgs.size()<0) return "";
    string prefix = strgs[0];
    for(int i = 1;i<strgs.size();i++){
        int n = prefix.length()-1;
        if(strgs[i].find(prefix) == string::npos ){
            i=0; 
            prefix.erase(n);
        }
        n = prefix.length()-1;
        if(strgs[i].find(prefix) != 0){
            prefix.erase(n);
        } 



    }
    return prefix;
    }
};