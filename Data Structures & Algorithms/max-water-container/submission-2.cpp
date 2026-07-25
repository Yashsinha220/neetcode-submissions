class Solution {
public:
    int maxArea(vector<int>& heights) {
        // with the two pointer approach 
        int n = heights.size()-1 , i =0 ;
        int ans = 0 ; 
        while(i<n){
            int area = 0;
            int length = min(heights[n] , heights[i]);
            int breadth = n-i;
            area = length * breadth;
            ans = max(area , ans);
            
            if(heights[i]<heights[n]){
                i++;
            }
            else {
                n--;
            }

        }
        return ans;
        
        
    }
};
