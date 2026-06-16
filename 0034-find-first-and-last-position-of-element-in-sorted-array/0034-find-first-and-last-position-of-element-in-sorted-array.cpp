class Solution {
public:
    int firstb(vector<int>& nums, int target){
        int lowerow = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(lowerow <= high){
            int mid = (high + lowerow) / 2;

            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else{
                lowerow=mid+1;
            }
        }

        return ans;
    }

    int lowerastb(vector<int>& nums, int target){
        int lowerow = 0;
        int high = nums.size() - 1;
       int ans = nums.size();

        while(lowerow <= high){
            int mid = (high +lowerow) / 2;

            if(nums[mid] > target){
                ans = mid;
                high=mid-1;
            }
            else{
                lowerow=mid+1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lowerb=firstb(nums,target);
        int upperb=lowerastb(nums,target);
        if(lowerb==-1 || nums[lowerb]!=target){
            return {-1,-1};
        }

        return {lowerb,upperb-1};
    }
};