class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        vector<int> dp(2*n,0);
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int j=delay+i;j<(forget+i);j++){
                dp[j]=(dp[j]+dp[i])%1000000007;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if((i-forget)>=0) ans=(ans+(dp[i]-dp[i-forget]+1000000007)%1000000007)%1000000007;
            else ans=(ans+dp[i]%1000000007)%1000000007;
        }
        return ans%1000000007;
    }
};