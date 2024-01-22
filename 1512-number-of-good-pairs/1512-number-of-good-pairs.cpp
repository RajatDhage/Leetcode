class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int hash[101] = {0};
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        
        for(int i=0;i<101;i++){
            int n = hash[i];
            cnt += (n*(n-1))/2;
        }
        return cnt;
    }
};