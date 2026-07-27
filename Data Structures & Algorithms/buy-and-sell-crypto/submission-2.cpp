class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // minimum maintain karna hai , aur max profit
        int currentmin =prices[0] ; 
        int currentmax = 0;
        for(int i =1 ; i<prices.size() ; i++){
            currentmax = max(currentmax , prices[i]-currentmin);
            currentmin = min(currentmin , prices[i]);

        }
        return currentmax;

        
    }
};
