class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
      set<int>myset ;
      for(int i : candyType){
        myset.insert(i);
      }
    if(myset.size() > candyType.size()/2) return candyType.size()/2;
    return myset.size();
    }
};