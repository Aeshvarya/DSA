class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minn = strs[0].size();
        for(int i = 1; i < strs.size(); i++){
            minn = min(minn, (int)strs[i].size());
        }

        string ans = "";
        for(int i = 0; i < minn; i++){
            for(int j = 0; j < strs.size() - 1; j++){
                if(strs[j][i] != strs[j+1][i]){
                    return ans;
                }
            }
            ans += strs[0][i];
        }
        return ans;
    }
}; 
