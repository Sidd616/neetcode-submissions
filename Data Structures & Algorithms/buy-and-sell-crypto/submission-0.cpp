class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell;
        int profit=0;

        for(int i = 1; i<prices.size(); i++){
            if(prices[i] < buy){
                buy = prices[i];
            }
            sell = prices[i];
            int diff = sell - buy;
            profit = max(diff, profit);
        }

        return profit;
    }
};
