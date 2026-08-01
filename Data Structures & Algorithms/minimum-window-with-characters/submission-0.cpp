class Solution {
public:
    string minWindow(string s, string t) {
        if (t.length() > s.length()) return "";

        vector<int> hashmap(256, 0);
        int m = s.length();
        int n = t.length();

        for (int i = 0; i < n; i++) hashmap[t[i]]++;

        int l = 0, r = 0, count = 0;
        int minLen = INT_MAX, start = 0;

        while (r < m) {
            if (hashmap[s[r]] > 0) count++;
            hashmap[s[r]]--;
            r++;

            while (count == n) {
                if (r - l < minLen) {
                    minLen = r - l;
                    start = l;
                }
                hashmap[s[l]]++;
                if (hashmap[s[l]] > 0) count--;
                l++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(start, minLen);
    }
};