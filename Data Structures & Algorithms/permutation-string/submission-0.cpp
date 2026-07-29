class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        int left = 0;
        if(n>m) return false;
        vector<int>freqs1(26 , 0);
        vector<int>freqWindow(26 , 0);
        // creating ferquency map of s1 and first window of s2
        for(int i =0 ; i<n ; i++){
            freqs1[s1[i] - 'a']++;
            freqWindow[s2[i] -'a']++;
        }
        if(freqs1 == freqWindow) return true;

        for(int right = n ; right<m ; right++){
            freqWindow[s2[left] - 'a']--;
            freqWindow[s2[right] - 'a']++;
            left ++;
            if(freqs1 == freqWindow) return true;

        }
        return false;
        
        
    }
};
