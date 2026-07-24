class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        int longest = 1;
        int current = 1;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]) continue;      // skip duplicates
            if(nums[i] - nums[i-1] == 1) current++;  // consecutive
            else current = 1;                        // reset
            longest = max(longest, current);
        }
        return longest;
    }
};