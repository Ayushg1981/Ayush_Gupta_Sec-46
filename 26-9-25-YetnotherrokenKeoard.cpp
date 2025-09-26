#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        stack<int> s1;
        stack<int> s2;
        vector<bool> v(str.size(),true);
        for(int i=0;i<str.size();i++){
            if(str[i]=='b'){
                v[i]=false;
                if(s1.size()>0){
                    v[s1.top()]=false;
                    s1.pop();
                }
            }
            else if(str[i]=='B'){
                v[i]=false;
                if(s2.size()>0){
                    v[s2.top()]=false;
                    s2.pop();
                }
            }
            else if(str[i]>='a' && str[i]<='z') s1.push(i);
            else s2.push(i);
        }
        string ans="";
        for(int i=0;i<str.size();i++){
            if(v[i]==true) ans+=str[i];
        }
        cout<<ans<<endl;
    }
}