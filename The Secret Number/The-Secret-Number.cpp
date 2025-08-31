#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long long y=10;
        vector<long long> ans;
        while(y<x){
            if(x%(y+1)==0) ans.push_back(x/(y+1));
            y*=10;
        }
        sort(ans.begin(),ans.end());
        int n=ans.size();
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        if(n>0) cout<<endl;
    }
    return 0;
}