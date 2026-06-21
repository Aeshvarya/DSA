class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int left=coins;
        int ct=0;
        for(int i=0;i<costs.size();i++){
            left=left-costs[i];
            if(left<0){
                break;
            }
            ct++;
        }
        return ct;
    }
};