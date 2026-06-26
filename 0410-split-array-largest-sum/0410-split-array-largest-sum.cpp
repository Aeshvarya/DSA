class Solution {
public:
 int maxb(vector<int> &nums){
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            maxx+=nums[i];
        }
        return maxx;
    }
    int minb(vector<int> &nums){
        int minn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            minn=min(minn,nums[i]);
        }
        return minn;
    }
    bool poss(vector<int> &nums, int mid,int m){
        int student=1;
        int pg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid)return false;
            if(pg+nums[i]>mid){
                student++;
                pg=nums[i];
            } else{
                pg+=nums[i];
            }
        }
        if(student>m){
            return false;
        } else{
            return true;
        }
        return -1;
    }
    int splitArray(vector<int>& nums, int k) {
        if(nums.size()<k)return -1;
        int low=minb(nums);
        int high=maxb(nums);
        while(low<=high){
            int mid=(high+low)/2;
            if(poss(nums,mid,k)==true){
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return low;
    }
};