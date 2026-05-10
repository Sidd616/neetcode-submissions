class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        map<int,float,greater<int>> mp;

        for(int i = 0; i<position.size() ; i++){
            float dist = target - position[i];
            mp[position[i]] = dist/speed[i];
        }

        stack<float> fleet;
        int count = 0;

        for(auto &it : mp){
            if(fleet.empty()){
                fleet.push(it.second);
                count++;
            }
            else{
                if(it.second > fleet.top()){
                    fleet.pop();
                    fleet.push(it.second);
                    count++;
                }
            }
        }

        return count;

    }
};
