class Solution {
public:
    int trap(vector<int>& height) {
        // get all the left max for the particular index and the right max for the 
        // particular index and then get the answer , 
        // as we know it will only store the water if on both side their will be 
        // two building whose height is greater than it's own heigt then it can store
        // the water

        int n = height.size() , ans=0;
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0] = height[0];
        suffix[n-1] = height[n-1];

        for(int i =1 ; i<n ; i++){
            prefix[i] = max(height[i] , prefix[i-1]);
        }
        for(int i = n-2 ; i>=0 ; i--){
            suffix[i] = max(height[i] , suffix[i+1]);
        }

        for(int i =0 ; i<n ; i++){
            if(height[i] < prefix[i] && height[i]<suffix[i]){
                  ans+= min(prefix[i],suffix[i] ) - height[i];
            }
        }
        return ans;
    }
};
