class Solution {
public:
    int search(vector<int>& nums, int target) {
        int flag = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums.at(i)==target){
                flag = 1;
                return i;
            }
        }
        if(flag == 0)
        return -1;

        return -1;
    }
};