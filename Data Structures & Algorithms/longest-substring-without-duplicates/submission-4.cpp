class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0 || s.length() == 1) return s.length();
        unordered_map<char , int>mp;
        int longest = 0 ;
        int left = 0 ;
        for(int i =0 ; i<s.size() ; i++){
            if(mp.find(s[i]) != mp.end() && mp[s[i]] >= left){
                left = mp[s[i]] + 1;
            }
            mp[s[i]] = i;
            longest = max(longest , i-left +1);
        }
        return longest;
        
    }
};
