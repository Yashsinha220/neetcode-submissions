class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int left = 0 ;
        int right = 0 ; 
        int longest = 0;
        unordered_set<char>sp;
        for(int right = 0 ; right<s.length() ; right++){

            while(sp.find(s[right]) != sp.end()){
                sp.erase(s[left]);
                left++;
            }
            sp.insert(s[right]);
            longest = max(longest , right-left +1);

        }
        return longest;
        
    }
};
