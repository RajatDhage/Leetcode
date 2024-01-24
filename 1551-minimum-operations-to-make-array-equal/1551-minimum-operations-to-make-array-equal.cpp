class Solution {
public:
    int minOperations(int n) {
        int diff = 0;
        vector<int> nums;
        for(int i=0;i<n;i++) nums.push_back(2*i + 1);
        
        int mid = n&1 ? nums[n/2] : (nums[n/2]+nums[(n-1)/2])/2;
        for(int i=0;i<n/2;i++){
            diff += abs(nums[(n-1)-i]-mid);
        }
        return diff;
    }
};