class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> numsmap;

        for (int x : nums)
            numsmap[x]++;

        vector<pair<int,int>> v;

        for (auto i : numsmap) {
            v.push_back({i.second, i.first});   // {frequency, element}
        }

        sort(v.begin(), v.end(), greater<pair<int,int>>());

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};