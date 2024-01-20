class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> mp1, mp2;
        for(int i=0;i<paths.size();i++){
            mp1[paths[i][0]]++;
            mp2[paths[i][1]]++;
        }

        for(auto it:mp2){
            if(mp1.find(it.first)==mp1.end()){
                return it.first;
            }
        }
        return "1"; //yaha tak to aana hi nhi hai, sirf kuch to return krna hota jai isliye likha
    }
};