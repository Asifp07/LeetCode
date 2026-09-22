class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int area = 0;

        while(i <= j){

            int minm = min(height[i],height[j]);
            area = max(area, minm*(j-i));
            
            if(height[i] <= height[j]) i++;

            else j--;
        }
        return area;
    }
};