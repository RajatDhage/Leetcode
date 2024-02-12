class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int it:nums){
            mp[it]++;
        }

        int ans = -1, tmp = 0;
        for(auto it:mp){
            tmp = max(tmp, it.second);
            if(tmp == it.second){
                ans = it.first;
            }
        }
        return ans;
    }
};