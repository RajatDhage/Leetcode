class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long sum = 0;
        long long ans = 0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<sum){
                ans = nums[i] + sum;
            }
            sum += nums[i];
        }
        return ans>0 ? ans : -1;
    }
};