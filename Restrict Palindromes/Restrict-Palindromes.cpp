#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int y=0;
        string ans="";
        for(int i=0;i<x;i++){
            ans+=char(y+'a');
            y++;
            if(y==5) y=0;
        }
        cout<<ans<<endl;
    }
}
