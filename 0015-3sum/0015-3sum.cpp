class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<nums.size();i++){
            int left = i+1;
            int right = nums.size()-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                if(sum > 0){
                    right--;
                }else if(sum < 0){
                    left++;
                }else{
                    res.insert({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
            }
        }

        vector<vector<int>> ans;
        for (auto it=res.begin();it!=res.end();it++) {
            ans.push_back(*it);
        }
        return ans;
    }
};