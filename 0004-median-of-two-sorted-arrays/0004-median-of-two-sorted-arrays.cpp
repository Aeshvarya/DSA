class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        int n2 = nums2.size();
        int total = n1 + n2;
        int i=0,j=0;
        int index1 = (total - 1) / 2;
        int index2 = total / 2;

        int element1 = 0;
        int element2 = 0;

        int count = 0;

        while(i < n1 && j < n2) {

            int val;

            if(nums1[i] < nums2[j]) {
                val = nums1[i];
                i++;
            }
            else {
                val = nums2[j];
                j++;
            }

            if(count == index1) element1 = val;
            if(count == index2) element2 = val;

            count++;
        }

        while(i < n1) {
             if(count == index1) element1 = nums1[i];
            if(count == index2) element2 = nums1[i];
            i++;
            count++;
        }
        while(j < n2) {

            if(count == index1) element1 = nums2[j];
     if(count == index2) element2 = nums2[j];

            j++;
           count++;
        }
        return (element1 + element2) / 2.0;
    }
};