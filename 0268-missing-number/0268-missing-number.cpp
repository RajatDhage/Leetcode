class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //M1
        // unordered_set<int> s;
        // for(auto i:nums){
        //     s.insert(i);
        // }

        // for(int i=0;i<=nums.size();i++){
        //     if(s.count(i)<1){
        //         return i;
        //     }
        // }
        // return -1;

        //M2
        int total_sum = (nums.size()*(nums.size()+1))/2;
        int sum = 0;
        for(auto i:nums){
            sum += i;
        }

        return total_sum - sum;

        // sort(nums.begin(), nums.end());
        // int i=0;
        // for(;i<nums.size();i++)
        // {
        //     if(nums[i]!=i)
        //     return i;
        // }
        // return i;
    }
};