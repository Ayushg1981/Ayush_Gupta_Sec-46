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
        for(int i=0;i<=(z-n);i++){
            unordered_map<string,int> mp;
            for(int j=i;j<(i+n);j+=y){
                string a=s.substr(j,y);
                if(m.find(a)!=m.end()) mp[a]++;
                else break;
            }
            if(m==mp) ans.push_back(i);
        }
        return ans;
    }
};