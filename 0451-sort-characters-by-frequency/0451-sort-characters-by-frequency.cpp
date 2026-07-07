class Solution {
public:
    string frequencySort(string s) {
        vector<pair<char,int>>vec(125);
        for(int i=0;i<s.size();i++){
            int freq=vec[s[i]].second;
            vec[s[i]]={s[i],freq+1};
        }

        auto comp=[&](pair<char,int>&p1,pair<char,int>&p2){
            return p1.second>p2.second;
        };
        sort(vec.begin(),vec.end(),comp);

    string ans="";
    for(int i=0;i<125;i++){
        if(vec[i].second>0){
            string temp=string(vec[i].second,vec[i].first);
            ans+=temp;
        }
    }
    return ans;
    }
};