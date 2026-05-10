class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> count;

        for(char s : s1){
            count[s]++;
        }

        for(int l=0; l < s2.size() ; l++){
            unordered_map<char,int> copy = count;
            int r =l;

            bool signal = true;

            while(signal){
                if((copy.find(s2[r]) != copy.end()) && (copy[s2[r]] > 0) ){
                    copy[s2[r]]--;
                }
                else{
                    break;
                }
                r++;
            }

                int count = 0;
            for(auto c : copy){
                if(c.second > 0){
                    count++;
                }
            }

            if(count == 0){
                return true;
            }
        }

        return false;
    }
};
