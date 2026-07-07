class Solution {
public:
    int myAtoi(string s) {
        long ans = 0;
        int fg = -1;
        int i = 0;

        while (i < s.size() && s[i] == ' ') {
            i++;
            }
        if (i < s.size() && s[i] == '-') {
             fg = 1; 
             i++; 
             }
        else if (i < s.size() && s[i] == '+') {
             i++; 
             }

        for (i; i < s.size(); i++) {
            if (s[i] < '0' || s[i] > '9'){
             break;
            }
            ans = ans * 10 + (s[i] - '0');

            if (fg == 1 && -ans <= INT_MIN){
                 return INT_MIN;
            }
            if (fg != 1 && ans >= INT_MAX) {
                return INT_MAX;
            }
        }

        if (fg == 1) {
            ans = ans * (-1);
        }
        return (int)ans;
    }
};