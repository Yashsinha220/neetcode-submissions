class Solution {
public:
    string encode(vector<string>& strs) {
        if(strs.empty())return "";
        string ans;
        for(auto &i:strs){
            int length = i.size();
            ans+= to_string(length) + "#" + i;
        }
        return ans;

    }

   vector<string> decode(string s) {
    vector<string> ans;

    int i = 0;

    while (i < s.size()) {

        int j = i;

        while (s[j] != '#') {
            j++;
        }

        // Number before '#'
        int length = stoi(s.substr(i, j - i));

        j++;   // Move past '#'

        // Extract the string
        ans.push_back(s.substr(j, length));

        // Move to next encoded string
        i = j + length;
    }

    return ans;
}
};
