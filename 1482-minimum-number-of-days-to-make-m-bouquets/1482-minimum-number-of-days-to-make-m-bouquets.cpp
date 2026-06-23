class Solution {
public:

    int possible(vector<int>& bloomDay, int m, int k,int mid){
        int ct=0;
        int bq=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                ct++;
            } else{
                bq+=(ct/k);
                ct=0;
            }
        }
        bq+=(ct/k);
        return bq;
    }

    int maxp(vector<int>& bloomDay){
        int maxx=0;
        for(int i=0;i<bloomDay.size();i++){
            maxx=max(maxx,bloomDay[i]);
        }
        return maxx;
    }

    int minp(vector<int>& bloomDay){
        int minn=0;
        for(int i=0;i<bloomDay.size();i++){
            minn=min(minn,bloomDay[i]);
        }
        return minn;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m * k > bloomDay.size())
{
            return -1;
        }
        int low=minp(bloomDay);
        int high=maxp(bloomDay);
        while(low<=high){
            int mid=(high+low)/2;
       if(possible(bloomDay,m,k,mid)<m){
        low=mid+1;
       } else{
        high=mid-1;
       }
        }
        return low;
    }
};