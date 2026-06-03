class Solution {
public:
    int bss(vector<int>& nums,int low,int high,int target){

    if(low>high) return -1;
    int mid=(low+high)/2;
    if(target==nums[mid]) return mid;
    else if(target<nums[mid]){
        return bss(nums,low,mid-1,target);
    }
    return bss(nums,mid+1,high,target);
}
    int search(vector<int>& nums, int target) {
        return bss(nums,0,nums.size()-1,target);
    }
};