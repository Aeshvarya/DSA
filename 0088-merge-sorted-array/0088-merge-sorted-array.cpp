class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int right=0,left=m-1;
           while(right<n && left>=0){
            if(nums1[left]>nums2[right]){
                swap(nums1[left],nums2[right]);
                right++;
                left--;
            } else{
                break;
            }
           }
           sort(nums1.begin(), nums1.begin() + m);
            sort(nums2.begin(), nums2.begin()+n);
           for(int i=0;i<n;i++){
                nums1[i+m]=nums2[i];
           }
    }
};