class Solution {
public:
    string longestPalindrome(string s) {

        // storing the length of the string
        int n = s.length();
        int maxlen = 0;
        int idx;

        // definging the for loop which will loop through complete string once

        for(int i = 0 ; i<n ; i++){

            // checking for even length palindrome 
            int start = i;
            int end = i+1; 

            while(start >= 0 && end <= n && s[start] == s[end]){
                if(end - start +1 > maxlen){
                    maxlen = end-start+1;
                    idx = start;
                }
                start--;
                end++;
            }


            // checking for odd length palindrome 
            start = i;
            end = i;

            while(start >= 0 && end <= n && s[start] == s[end]){
                if(end - start +1 > maxlen){
                    maxlen = end-start+1;
                    idx = start;
                }
                start--;
                end++;
            }

        }

        return s.substr(idx,maxlen);

    }
};
