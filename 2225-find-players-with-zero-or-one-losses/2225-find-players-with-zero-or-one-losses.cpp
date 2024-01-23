class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> winner;
        unordered_map<int, int> loser;

        vector<int> w;
        vector<int> l;

        for(int i=0;i<matches.size();i++){
            winner[matches[i][0]]++;
        }

        for(int i=0;i<matches.size();i++){
            loser[matches[i][1]]++;
        }

        for(auto it:winner){
            if(it.second>0 && loser.find(it.first)==loser.end()){
                w.push_back(it.first);
            }
        }

        for(auto it:loser){
            if(it.second == 1){
                l.push_back(it.first);
            }
        }
        sort(w.begin(), w.end());
        sort(l.begin(), l.end());

        return {w, l};
    }
};