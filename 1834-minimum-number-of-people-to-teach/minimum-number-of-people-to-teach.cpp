class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& fr) {
        int m=languages.size();
        vector<unordered_map<int,int>> v(m);
        for(int i=0;i<m;i++){
            for(int j=0;j<languages[i].size();j++){
                v[i][languages[i][j]]++;
            }
        }
        int a=fr.size();
        unordered_set<int> s;
        for(int i=0;i<a;i++){
            unordered_map<int,int> b=v[fr[i][0]-1];
            bool flag=false;
            for(int j=0;j<languages[fr[i][1]-1].size();j++){
                if(b.find(languages[fr[i][1]-1][j])!=b.end()){
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                s.insert(fr[i][0]-1);
                s.insert(fr[i][1]-1);
            }
        }
        int ans=m;
        for(int i=1;i<=n;i++){
            int y=0;
            for(auto x:s){
                if(v[x].find(i)!=v[x].end()) y++;
            }
            ans = min(ans, (int)s.size() - y);
        }
        return ans;
    }
};