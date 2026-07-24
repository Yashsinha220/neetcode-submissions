class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>stor(nums.begin() , nums.end());
        int res = 0;
        for(auto num  : nums){
            int current = num;
            int streak = 0 ; 
            while(stor.find(current) != stor.end()){
                current++;
                streak++;
            }
            res = max(res , streak);
        
        }
        return res;
    }
};