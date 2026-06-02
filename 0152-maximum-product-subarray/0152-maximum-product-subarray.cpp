class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        long long preprod= 1;
        long long sufprod = 1;
        int ans = INT_MIN;

        for(int i = 0; i < n; i++) {
            if(preprod == 0) preprod = 1;
            if(sufprod == 0) sufprod = 1;
            preprod *= nums[i];
            sufprod *= nums[n - i - 1];
            ans = max(ans, (int)max(preprod, sufprod));
        }

        return ans;
    }
};