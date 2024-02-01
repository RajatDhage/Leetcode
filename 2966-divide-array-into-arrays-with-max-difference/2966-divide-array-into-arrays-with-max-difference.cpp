class Solution {
public:
    
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        // vector<vector<int>> ans;
        // sort(nums.begin(), nums.end());
        // int flag = 0;

        // for (int i = 0; i < nums.size(); i += 3) {
        //     vector<int> tmp;
        //     int j = i;
        //     for (; j < min(i + 2, static_cast<int>(nums.size()) - 1); j++) {
        //         if (abs(nums[j] - nums[j + 1]) <= k) {
        //             tmp.push_back(nums[j]); 
        //         } else {
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if(flag == 1){
        //         return {};
        //     }
        //     if (j == i+2 && tmp.size() == 2) {
        //         tmp.push_back(nums[j]);
        //     }
        //     ans.push_back(tmp);
        // }
        // return ans;
    
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<nums.size();i+=3){
            vector<int> tmp;
            if(i+2<nums.size() && nums[i+2]-nums[i]<=k){
                tmp.push_back(nums[i]);
                tmp.push_back(nums[i+1]);
                tmp.push_back(nums[i+2]);
            }else{
                return {};
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};