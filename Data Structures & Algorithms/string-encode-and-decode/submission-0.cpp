class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "/?s";

        for(int i=0; i<strs.size() ; i++){
            s += strs[i];
            s += "/?s";
        }

        return s;

    }

    vector<string> decode(string s) {
        vector<string> str;
        string temp = "";

        for(int i=3 ; i<s.length() ; i++){
            
            if(s[i] == '/'){
                i++;
                if(s[i] == '?'){
                    i++;
                    if(s[i] == 's'){
                        str.push_back(temp);
                        temp = "";
                    }
                    else{
                        temp += "/?" + s[i];
                    }
                }
                else{
                    temp += "/" + s[i];
                }
            }
            else{
                temp += s[i];
            }
        }

        return str;
    }
};
