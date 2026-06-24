class Solution {
public:
   int maxp(vector<int>& weights){
    int maxx=0;
    for(int i=0;i<weights.size();i++){
        maxx=max(maxx,weights[i]);
    }
    return maxx;
}
  int summ(vector<int>& weights){
    int sum=0;
    for(int i=0;i<weights.size();i++){
        sum+=weights[i];
    }
    return sum;
}
    int poss(vector<int>& weights, int mid){
        int cwt=mid;
        int day=1;
        for(int i=0;i<weights.size();i++){
        if(weights[i]<=cwt){
            cwt-=weights[i];
        } else{
            day++;
            cwt = mid - weights[i];
        }
    }
    return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=maxp(weights);
          int high=summ(weights);
        while(low<=high){
            int mid=(high+low)/2;
            if(poss(weights,mid)<=days){
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return low;
    }
};