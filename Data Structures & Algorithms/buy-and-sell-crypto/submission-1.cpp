class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // minimum maintain karna hai , aur max profit
        int currentmin =prices[0] ; 
        int currentmax = 0;
        for(int i =1 ; i<prices.size() ; i++){
            int profit = 0;
            profit =prices[i]-currentmin;
            currentmax = max(currentmax , profit);
            currentmin = min(currentmin , prices[i]);

        }
        return currentmax;

        
    }
};
