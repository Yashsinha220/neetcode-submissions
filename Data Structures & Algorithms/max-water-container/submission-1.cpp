class Solution {
public:
    int maxArea(vector<int>& heights) {
        // let try the brute force first and then the optimize solution 
        int ans = 0 , n = heights.size();
        for(int i =0 ; i<n-1 ; i++){
            int currentmaxarea = 0;
            for(int j = i+1 ; j<n ; j++){
                int area = 0;
                int length = min(heights[i] , heights[j]);
                int breadth = j-i;
                area = length * breadth;
                currentmaxarea = max(currentmaxarea , area);
            }
            ans = max(currentmaxarea , ans);
        }
        return ans;
        
    }
};
