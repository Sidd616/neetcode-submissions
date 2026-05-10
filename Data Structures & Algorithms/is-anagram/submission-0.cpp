using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hashMap;

        if(s.length() != t.length()){
            return false;
        }

        for(char c : s){
            hashMap[c]++;
        }

        for(char c : t){
            if(hashMap.find(c) == hashMap.end() || hashMap[c] == 0){
                return false;
            }
            hashMap[c]--;
        }

        for(const auto pair : hashMap){
            if(pair.second != 0){
                return false;
            }
        }

        return true;
    }
};
