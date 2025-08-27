class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=INT_MIN;
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==c) x++;
            else if(x==0){
                c=nums[i];
                x=1;
            }
            else x--;
        }
        return c;
    }
};