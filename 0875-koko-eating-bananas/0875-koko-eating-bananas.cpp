class Solution {
public:

    long long maxp(vector<int>& piles){
        int maxx=0;
        for(int i=0;i<piles.size();i++){
            maxx=max(maxx,piles[i]);
        }
        return maxx;
    }
    long long total(vector<int>& piles,int k){
        long long hours=0;
        for(int i=0;i<piles.size();i++){
         hours+=ceil((double)piles[i]/(double)k);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxp(piles);
        while(low<=high){
            int mid=(high+low)/2;
            if(total(piles,mid)<=h){
                    high=mid-1;
            } else{
                  low=mid+1;  
            }
        }
        return low;
    }
};