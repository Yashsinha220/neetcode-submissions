class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // brute force
        int maxprofit =0 ;
        for(int i=0 ; i<prices.size()-1 ; i++){
            for(int j = i+1 ; j<prices.size() ; j++){
                maxprofit = max(maxprofit , prices[j]-prices[i]);
            }
        }
        return maxprofit;
        
    }
};
