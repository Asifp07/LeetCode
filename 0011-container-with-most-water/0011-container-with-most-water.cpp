class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        auto area = 0;

        while(i <j){

            auto minm = min(height[i],height[j]);
            area = max(area, minm*(j-i));
            
            if(height[i] <= height[j]) i++;
            
            else j--;
        }
        return area;
    }
};