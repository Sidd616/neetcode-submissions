class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int r = piles[n-1];

        int res = r;

        while(l<=r){
            int k = (l+r) / 2;

            long long time = 0;
            
            for(long long p : piles){
                time +=  (p + k - 1) / k;
            }

            if(time <= h){
                res = k;
                r = k-1;
            }
            else{
                l = k+1;
            }
        }

        return res;
    }
};
