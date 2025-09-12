#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d[n];
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        int x=d[0];
        bool flag=true;
        for(int i=1;i<n;i++){
            if(d[i]<x){
                flag=false;
            }
            x=d[i];
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // your code goes here
    }

}
