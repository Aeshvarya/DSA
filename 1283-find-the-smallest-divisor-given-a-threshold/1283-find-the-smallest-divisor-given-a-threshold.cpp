class Solution {
public:

    int divv(vector<int>& nums, int mid){
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i] / mid);
        }
        return sum;
    }
    int maxp(vector<int>& nums){
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            maxx=max(maxx,nums[i]);
        }
        return maxx;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
    int low=1;
    int high=maxp(nums);
    while(low<=high){
        int mid=(low+high)/2;
        if(divv(nums,mid)<=threshold){
            high=mid-1;
        } else{
            low=mid+1;
        }
    }
         return low;

    }
};