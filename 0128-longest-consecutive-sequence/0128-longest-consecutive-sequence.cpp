class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
             return 0;
        }
        unordered_set<int>st;
        int ct=1;
        int x;
        int maxi=1;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }

    for(auto it : st){
         if(st.find(it-1)==st.end()){
            ct=1;
            x=it;
            while(st.find(x+1)!=st.end()){
                ct++;
                x++;
            }
         }
         maxi=max(ct,maxi);
    }
    return maxi;
    }
};