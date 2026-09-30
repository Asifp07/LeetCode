class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
       int n = fruits.size();
       int i = 0; 
       int count = 0;
       while (i < fruits.size()){
            
            int j = 0;
            int  m = 0;
            while (j < baskets.size()){
                if(baskets[j] >= fruits[i]){
                    fruits.erase(fruits.begin() + i);
                    baskets.erase(baskets.begin() + j);
                    count ++;
                    m ++;
                    break;
                }
                j++;
            }
            if (m == 0) i++;

       }
       return n - count;
    }
};