class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        
        //calculating sum of first k elements
        for(int i=0;i<k;i++){
            sum += nums[i];
        }

        //now we will check with next elemetns by adding i to sum and subtracting 
        //the prevoius one from it

        int tmp_sum = sum;

        for(int i=k;i<nums.size();i++){
            sum += nums[i] - nums[i-k];
            tmp_sum = max(tmp_sum, sum);
        }
        return double(tmp_sum)/k;
    }
};