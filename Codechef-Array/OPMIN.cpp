#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int m=a[0];
        for(int i=1;i<n;i++){
            m=min(m,a[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(a[i]!=m) ans++;
        }
        cout<<ans<<endl;
    }

}
