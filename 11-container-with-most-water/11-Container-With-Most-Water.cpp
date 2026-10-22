class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int mar=0;
        while(left<right){
            int h=min(height[left],height[right]);
            int area = h*(right-left);
            mar = max(area,mar);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return mar ;
    }
};