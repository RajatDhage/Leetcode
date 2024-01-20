class Solution {
public:
    int minimumCost(vector<int>& nums) {
        // by observation
        sort(nums.begin()+1, nums.end());
        return nums[0]+nums[1]+nums[2];
    }
};