class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int prev[n];
        int max=-1;
        for(int i=0;i<n;i++){
            prev[i]=max;
            if(max<height[i]) max=height[i];
        }
        int max2=-1;
        for(int i=n-1;i>=0;i--){
            if(max2==max) break;
            prev[i]=max2;
            if(max2<height[i]) max2=height[i];
        }
        int water=0;
        for(int i=1;i<n-1;i++){
            if(height[i]<prev[i]){
                water+=prev[i]-height[i];
            }
        }
        return water;
    }
};