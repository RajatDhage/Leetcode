class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for(int i:arr){
            mp[i]++;
        }

        vector<int> ans;
        for(auto i:mp){
            ans.push_back(i.second);
        }
        sort(ans.begin(), ans.end());

        int cnt = 0;
        for(auto i:ans){
            int j = i;
            while(j>0){
                if(k>0){
                    k--;j--;
                }else{
                    break;
                }
                if(j<=0){
                    cnt++;
                }
            }
        }
        return ans.size()-cnt;
    }
};