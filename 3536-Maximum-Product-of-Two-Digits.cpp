class Solution {
public:
    int maxProduct(int n) {
        int max1=-1;
        int max2=-1;
        while(n){
            int i=n%10;
            if(i>max1){
                max2=max1;
                max1=i;
            }else if(i>max2){
                max2=i;
            }
            n/=10;
        }
        return max1*max2;
    }
};