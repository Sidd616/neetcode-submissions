class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        int first = 0;
        int last = len-1;
        vector<int> result;
        vector<pair<int,int>> copy;

        for(int i =0; i<len ; i++){
            copy.push_back({nums[i],i});
        }

        sort(copy.begin(), copy.end());

        while(first < last && first < len && last >= 0){
            int sum = copy[first].first + copy[last].first;

            if(sum == target){
                if(copy[first].second < copy[last].second){
                    result.push_back(copy[first].second);
                    result.push_back(copy[last].second);
                }else{
                    result.push_back(copy[last].second);
                    result.push_back(copy[first].second);
                }
                
                return result;
            }
            else if(sum < target){
                first++;
            }
            else{
                last--;
            }
        }
    }
};
