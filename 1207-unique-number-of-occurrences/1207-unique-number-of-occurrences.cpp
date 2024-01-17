class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        //M1
        unordered_map<int, int> mp;
        for(auto x:arr){
            mp[x]++;
        }

        unordered_set<int> s;
        for(auto it=mp.begin();it!=mp.end();it++){
            int tmp = it->second;
            if(s.find(tmp)!=s.end()){
                return false;
            }
            s.insert(tmp);
        } 
        return true;

        //M2
        // unordered_map<int, int> mp;

        // for(int i=0;i<arr.size();i++){
        //     mp[arr[i]]++;
        // }

        // vector<int> v;
        // for(auto it=mp.begin();it!=mp.end();it++){
        //     v.push_back(it->second);
        // }

        // sort(v.begin(), v.end());
        // for(int i=1;i<v.size();i++){
        //     if(v[i]==v[i-1]){
        //         return false;
        //     }
        // }
        // return true;
    }
};