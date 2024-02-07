class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        
        vector<pair<int, int>> v;
        for(auto i:mp){
            v.push_back({i.second, i.first});
        }
        
       sort(v.begin(), v.end(), [&](pair<int, int>& a, pair<int, int>& b) {
        if(a.first == b.first) return a.second > b.second; // Higher value over smaller value
        else return a.first < b.first; // Lower frequency first
    });
        
        vector<int> res;
        for(auto i:v){
            while(i.first--){
                res.push_back(i.second);
            }
        }
        return res;
    }
};