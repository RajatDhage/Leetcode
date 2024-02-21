class Solution {
public:
    int singleNumber(vector<int>& nums) {

        unordered_map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }

        for(auto i:nums){
            if(mp[i]==1){
                return i;
            }
        }
        return 1;
        // sort(nums.begin(), nums.end());

        // for(int i=2;i<nums.size();i+=3)
        // {
        //     if(nums[i]!=nums[i-1])
        //     {
        //         return nums[i-1];
        //     }
        //     else if(nums[i]!=nums[i-2])
        //     return nums[i-2];
        // }
        // return nums[nums.size()-1];
    }
};