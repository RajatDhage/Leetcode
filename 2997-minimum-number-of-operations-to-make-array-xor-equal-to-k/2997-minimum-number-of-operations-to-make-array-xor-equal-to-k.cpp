class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt = 0;
        int xorr = 0;
        for(int i=0;i<nums.size();i++){
            xorr ^= nums[i];
        }

        if(xorr == k){
            return 0;
        }

        while(xorr>0 || k>0){    //if one of them even >0 then loop should continue
            if((xorr&1) != (k&1)){
                cnt++;
            }
            xorr >>= 1;
            k >>= 1;
        }
        return cnt;
    }
};