class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof=0,maxi=0,mini=prices[0];
        for(int i=1;i<prices.size();i++){
               prof=prices[i]-mini;
               maxi=max(prof,maxi);
               mini=min(mini,prices[i]);
            }
        
        return maxi ;
    }
};