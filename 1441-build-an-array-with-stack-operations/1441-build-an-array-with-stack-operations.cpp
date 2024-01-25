class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int hash[101] = {0};
        for(int i=0;i<target.size();i++){
            hash[target[i]]++;
        }

        vector<string> ans;
        for(int i=1;i<101;i++){
            // cout<<it.first<<" ";
            
            if(hash[i]>0 && i<=n){
                ans.push_back("Push");
            }
            else if(hash[i]==0 && i>target[target.size()-1]){
                return ans;
            }
            else if(hash[i]==0 && i<=n){
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            
        }
        return ans;
    }
};