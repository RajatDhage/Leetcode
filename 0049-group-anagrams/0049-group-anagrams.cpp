class Solution {
public:

    string solve(string tmp){
        sort(tmp.begin(), tmp.end());
        return tmp;
    } 

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGrp;
        for(auto s:strs){
            string ans = solve(s);
            anagramGrp[ans].push_back(s);
        }

        vector<vector<string>> res;
        for(auto it:anagramGrp){
            res.push_back(it.second);
        }
        return res;
    }
};