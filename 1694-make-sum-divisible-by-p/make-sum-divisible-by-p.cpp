class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sum=nums[0];
        vector<int> pf(nums.size(),0);
        pf[0]=nums[0]%p;
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            pf[i]=(pf[i-1]+nums[i])%p;
        }
        sum=sum%p;
        if(sum==0) return 0;
        int ans=nums.size();
        unordered_map<int,int> m;
        m[0]=-1;
        for(int i=0;i<nums.size();i++){
            int x=(pf[i]-sum+p)%p;
            if(m.find(x)!=m.end()){
                ans=min(ans,i-m[x]);
            }
            m[pf[i]]=i;
        }
        if(ans==nums.size()) return -1;
        return ans;
    }
};