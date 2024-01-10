class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int st = 0, fast = 1;
        while(fast<nums.size()){
            if(nums[st]==nums[fast]){
                fast++;
            }
            else{
                st++;
                nums[st] = nums[fast];
                fast++;
            }
        }
        return st+1;
    }
};