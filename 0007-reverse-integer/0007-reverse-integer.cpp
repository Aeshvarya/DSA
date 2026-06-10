class Solution {
public:
    int reverse(int x) {

        int ns = 0;

        while(x != 0){  

            int ks = x % 10;
            if(ns > INT_MAX/10 || ns < INT_MIN/10){
                return 0;
            }
            ns = ns * 10 + ks;
            x /= 10;
        }
 return ns;
    }
};