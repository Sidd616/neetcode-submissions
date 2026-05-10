class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> index;
        vector<int> res(temperatures.size(), 0);

        for(int i=0 ; i< temperatures.size() ; i++){
            if(index.empty()){
                index.push(i);
            }
            else{
                while(!index.empty() && temperatures[i] > temperatures[index.top()]){
                    res[index.top()]=i-index.top();
                    index.pop();
                }
                    index.push(i);
            }
        }

        return res;
    }
};
