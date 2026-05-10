class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int n = nums.size();
        int r = n-1;
        int minEle = nums[l];

        while(l < r){
            int k = min(nums[l],nums[r]);
            minEle = min(minEle,k);
    
            if(nums[l] < nums[r]){
                l++;
            }
            else{
                r--;
            }
        }

        return minEle;

    }
};
