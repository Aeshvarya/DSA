class Solution {
public:
    bool isIsomorphic(string s, string t) {

        vector<int> index1(256,0);
        vector<int> index2(256,0);

        for(int i=0;i<s.length();i++)
        {
            if(index1[s[i]]!=index2[t[i]]){
                return false;
            }
        
        index1[s[i]]=i+1;
        index2[t[i]]=i+1;
        }
        return true;
    }
};