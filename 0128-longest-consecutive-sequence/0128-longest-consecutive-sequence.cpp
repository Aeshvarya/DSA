class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
             return 0;
        }
        int ct=1;
        int strt=nums[0];
        int maxi=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==strt+1){
                strt=nums[i];
                ct++;
            } else if(nums[i]==strt){
                    continue;
            }
            else {
                ct=1;
                strt=nums[i];
            }
            maxi=max(ct,maxi);
        }
    return maxi;
    }
};