class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans=s+s;
        int leng=s.size();
        for(int i=0;i<=s.size();i++){
            if(ans.substr(i,leng)==goal){
                return true;
            }
        }
        return false;
    }
};