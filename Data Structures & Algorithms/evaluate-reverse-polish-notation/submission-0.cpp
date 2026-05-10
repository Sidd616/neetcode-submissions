class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_map<string, int> mp = {
            {"+" , 1},
            {"-", 2},
            {"*", 3},
            {"/", 4}
        };

        stack<int> stk;

        for(string s : tokens){
            if(mp.count(s)){
                int op = mp[s];

                int op2 = stk.top();
                stk.pop();
                int op1 = stk.top();
                stk.pop();

                int res;

                switch(op){
                    case 1:
                    res = op1 + op2;
                    break;

                    case 2:
                        res = op1 - op2;
                        break;
                    
                    case 3:
                        res = op1 * op2;
                        break;

                    case 4:
                        res = op1 / op2;
                        break;
                    
                }

                stk.push(res);

            }
            else{

            int num = stoi(s);
            stk.push(num);
            }

        }

        return stk.top();
    }
};
