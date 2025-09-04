class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]++;
        }
        int x=words.size();
        int y=words[0].size();
        int z=s.size();
        int n=x*y;
        vector<int> ans;
        for(int i=0;i<y;i++){
            unordered_map<string,int> mp;
            int start=i;
            int count=0;
            for(int j=i;(j+y)<=z;j+=y){
                string a=s.substr(j,y);
                if(m.find(a)!=m.end()){
                    mp[a]++;
                    count++;
                    while(mp[a]>m[a]){
                        string b=s.substr(start,y);
                        mp[b]--;
                        start+=y;
                        count--;
                    }
                    if(count==x) ans.push_back(start);
                }
                else{
                    count=0;
                    start=j+y;
                    mp.clear();
                }
            }
        }
        return ans;
    }
};