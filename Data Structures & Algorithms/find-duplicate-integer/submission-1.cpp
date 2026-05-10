class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> mset;
        for(int i = 0; i < nums.size(); i++){
            if(mset.find(nums[i]) == mset.end())
                mset.insert(nums[i]);
            else
                return nums[i];
        }

        return 0;
    }
};
