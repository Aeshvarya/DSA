class Solution {
public:
    bool rotateString(string s, string goal) {
        string ans;
        for(int i=0;i<s.size();i++){
            ans=s.substr(1);
            ans+=s[0];
            if(ans==goal){
                return true;
            } else{
                s=ans;
            }
        }  
        return false;      
    }
};