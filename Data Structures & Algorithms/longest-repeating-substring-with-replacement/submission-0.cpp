class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> charSet;
        int res = 0;

        int l=0; 
        int maxf=0;

        for(int r=0 ; r < s.size() ; r++){
            charSet[s[r]]++;
            maxf = max(maxf, charSet[s[r]]);

            while((r-l+1) - maxf > k){
                charSet[s[l]]--;
                l++;
            }

            res = max(res, r-l+1);
        }

        return res;
    }
};
