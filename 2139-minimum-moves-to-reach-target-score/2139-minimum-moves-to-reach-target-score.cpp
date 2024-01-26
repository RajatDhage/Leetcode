class Solution {
public:

    int minMoves(int target, int maxDoubles) {
        int cnt = 0;
        while(target > 1){
            if(maxDoubles == 0){
                return cnt + target-1;
            }
            else if(target%2==0){
                target /= 2;
                cnt++;
                maxDoubles--;
            }
            else{
                target--;
                cnt++;
            }
        }
        return cnt;
    }
};