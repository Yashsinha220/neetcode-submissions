class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // minimum maintain karna hai , aur max profit
        // Step 1: Identify the repeated work

// For every i, you're checking all future j values:

// buy at i → check every possible selling day

// But notice something:

// When you're standing at day j, you only care about the cheapest price you've seen before day j.

// You don't actually need to remember every previous price.
        int currentmin =prices[0] ; 
        int currentmax = 0;
        for(int i =1 ; i<prices.size() ; i++){
            currentmax = max(currentmax , prices[i]-currentmin);
            currentmin = min(currentmin , prices[i]);

        }
        return currentmax;

        
    }
};
