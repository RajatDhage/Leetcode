class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        for(int i=0;i<n;i++) nums.push_back(start+2*i);
        
        int res = 0;
        for(int i=0;i<n;i++) res ^= nums[i];
        return res;
    }
};