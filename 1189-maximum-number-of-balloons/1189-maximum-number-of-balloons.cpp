class Solution {
public:
    int maxNumberOfBalloons(string text) {
    int have[256] = {0};
    for (int i = 0; i < text.size(); i++) {
        have[(int)text[i]]++;    
    }

    string word = "balloon";
    int need[256] = {0};
    for (int i = 0; i < word.size(); i++) {
        need[(int)word[i]]++;
    }

    int ans = INT_MAX;
    for (int i = 0; i < 256; i++) {
        if (need[i] > 0) {    
            ans=min(ans,have[i]/need[i]);
        }
    }
    return ans;
}

};