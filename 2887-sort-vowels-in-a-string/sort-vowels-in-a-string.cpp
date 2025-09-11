class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') return true;
        return false;
    }
    string sortVowels(string s) {
        string a="";
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i]))a+=s[i];
        }
        sort(a.begin(),a.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i]=a[j];
                j++;
            }
        }
        return s;
    }
};