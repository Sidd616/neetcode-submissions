class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int> mp;

        int l = 0;

        vector<int> res;

        for(int r=0 ; r<nums.size() ; r++){
            mp[nums[r]]++;
            if(r-l >= k-1){
                res.push_back(mp.rbegin()->first);
                mp[nums[l]]--;
                if(mp[nums[l]] == 0){
                    mp.erase(nums[l]);
                }
                l++;
            }
        }

        return res;
    }
};
