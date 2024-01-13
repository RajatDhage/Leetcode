class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(auto i:s){
            mp1[i]++;
        }    

        for(auto i:t){
            mp2[i]++;
        }      

        int cnt = 0;

        for(auto it=mp2.begin();it!=mp2.end();it++){
            cnt += min(mp1[it->first], mp2[it->first]);
        }
        return s.size()-cnt;
    }
};