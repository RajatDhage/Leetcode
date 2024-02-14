class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // int p=0, n=0;
        vector<int> p;
        vector<int> n;
        for(auto i:nums){
            if(i>0){
                p.push_back(i);
            }else{
                n.push_back(i);
            }
        }

        vector<int> ans;
        int i=0;
        while(i<p.size()){
            ans.push_back(p[i]);
            ans.push_back(n[i]);
            i++;
        }
        return ans;
    }
};