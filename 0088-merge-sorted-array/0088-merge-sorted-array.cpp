class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int r=0,l=m-1;
           while(r<n && l>=0){
            if(nums1[l]>nums2[r]){
                swap(nums1[l],nums2[r]);
                r++;
                l--;
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