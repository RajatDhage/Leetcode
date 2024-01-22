class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            int no_of_digits = int(log10(nums[i]))+1;
            cnt += (no_of_digits%2==0) ? 1 : 0;
        }
        return cnt;
    }
};