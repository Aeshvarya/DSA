class Solution {
public:
    int reverse(int x) {

        int numb = 0;

        while(x != 0){  

            int ks = x % 10;
            if(numb > INT_MAX/10 || numb < INT_MIN/10){
                return 0;
            }
            numb = numb * 10 + ks;
            x /= 10;
        }
 return numb;
    }
};