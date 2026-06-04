class Solution {
public:
    int firstb(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high){
            int mid = (high + low) / 2;

            if(nums[mid] >= target){
                ans = mid;
                high = mid - 1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }

    int lastb(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
       int ans = nums.size();

        while(low <= high){
            int mid = (high +low) / 2;

            if(nums[mid] > target){
                ans = mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=firstb(nums,target);
        int ub=lastb(nums,target);
        if(lb==-1 || nums[lb]!=target){
            return {-1,-1};
        }

        return {lb,ub-1};
    }
};