class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        
        vector<pair<int, char>> freqVec;

        for(auto it:mp){
            freqVec.push_back({it.second, it.first});
        }
        
        string ans = "";
        sort(freqVec.begin(), freqVec.end(), greater<pair<int, char>>());  //to sort in descending manner
       
        for(auto it:freqVec){
            while(it.first){
                ans += it.second;
                it.first--;
            }
        }
        return ans;
    }
};