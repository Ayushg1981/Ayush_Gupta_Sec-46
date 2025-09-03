class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int x=0;
        int G=-1,P=-1,M=-1;
        for(int i=0;i<garbage.size();i++){
            x+=garbage[i].size();
            for(int j=0;j<garbage[i].size();j++){
                if(garbage[i][j]=='G') G=i;
                else if(garbage[i][j]=='P') P=i;
                else M=i;
            }
        }
        for(int i=1;i<travel.size();i++){
            travel[i]+=travel[i-1];
        }
        if(G>0) x+=travel[G-1];
        if(P>0) x+=travel[P-1];
        if(M>0) x+=travel[M-1];
        return x; 
    }
};