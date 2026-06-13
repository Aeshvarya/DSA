class Solution {
public:
    int binaryy(vector<int>& nums,int low,int high,int target){

    if(low>high) return -1;
    int mid=(low+high)/2;
    if(target==nums[mid]) return mid;
    else if(target<nums[mid]){
        return binaryy(nums,low,mid-1,target);
    }
    return binaryy(nums,mid+1,high,target);
}
    int search(vector<int>& nums, int target) {
        return binaryy(nums,0,nums.size()-1,target);
    }
};