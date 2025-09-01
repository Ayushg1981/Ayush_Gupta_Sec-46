class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        if(k==1) return nums;
        vector<int> ans;
        int a=1;
        for(int i=1;i<k;i++){
            if((nums[i-1]+1)==nums[i]) a++;
            else a=1;
        }
        if(a==k) ans.push_back(nums[k-1]);
        else ans.push_back(-1);
        int i=0;
        int j=k;
        while(j<nums.size()){
            if((nums[j-1]+1)==nums[j]) a++;
            else a=1;
            if(a>=k) ans.push_back(nums[j]);
            else ans.push_back(-1);
            j++;
        }
        return ans;
    }
};