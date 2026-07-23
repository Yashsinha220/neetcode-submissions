class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pref(n);
        vector<int>suff(n);
        vector<int>ans(n);
        int prefix = 1; 
        for(int i =0 ; i<n ; i++){
            prefix*=nums[i];
            pref[i] = prefix;
        }

        // ab suffix kae liya piche sa start karenge aur sath mai answer 
        // bhi nikalenge
        int suffix = 1;
        for(int i = n-1 ; i>=0 ; i--){
            suffix*=nums[i];
            suff[i] = suffix;
        }

        for(int i =0 ; i<n ; i++){
            if(i==0){
                ans[i] = suff[i+1];
            }
            else if(i==n-1){
                ans[i] = pref[i-1];
            }
            else {ans[i] = pref[i-1] * suff[i+1];}
        }
        return ans;
    }
};
