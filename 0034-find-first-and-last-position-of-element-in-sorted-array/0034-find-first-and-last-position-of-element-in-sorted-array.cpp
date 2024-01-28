class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        //M1 : Brute Force TC:O(n)
        // int first=-1, last=-1;
        // int tmp = 0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target && tmp==0){
        //         first = i;
        //         last = i;
        //         tmp++;
        //     }
        //     else if(nums[i]==target && tmp>0){
        //         last = i;
        //     }
        // }
        // return {first, last};

        //M2 : Binary Search TC:O(logn)

        int st = 0, end = nums.size()-1;
        int mid = 0;
        int first = -1, last = -1;

        while(st<=end){
            mid = st+(end-st)/2;
            if(nums[mid] == target){
                if(mid==0 || nums[mid-1]!=target){
                    first = mid;
                    break;
                }else{
                    end = mid - 1;
                }
            }
            else if(nums[mid]>target){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }

        st = 0, end = nums.size()-1;
        mid = 0;

        while(st<=end){
            mid = st+(end-st)/2;
            if(nums[mid] == target){
                if(mid==nums.size()-1 || nums[mid+1]!=target){
                    last = mid;
                    break;
                }else{
                    st = mid + 1;
                }
            }
            else if(nums[mid]>target){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return {first, last};
    }
};