class Solution {
public:

    int climbStairs(int n) {  //same as fibonacci (by observation)
        int i=1, j=1;

        for(int it=0;it<n-1;it++){
          int temp = i;
          i = i+j;
          j = temp;
        }

      return i;
    }
};