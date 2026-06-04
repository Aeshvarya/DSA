class Solution {
public:
    int firstb(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high){
            int mid = (high + low) / 2;

            if(nums[mid] == target){
                ans = mid;
                high = mid - 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return ans;
    }

    int lastb(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;

        while(low <= high){
            int mid = (high +low) / 2;

            if(nums[mid] == target){
                ans = mid;
                low = mid + 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(firstb(nums, target));
        ans.push_back(lastb(nums, target));

        return ans;
    }
};