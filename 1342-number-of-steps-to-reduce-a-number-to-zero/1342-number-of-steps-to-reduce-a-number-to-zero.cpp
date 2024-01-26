class Solution {
public:

    int cal(int num, int cnt){
        if(num == 0){
            return cnt;
        }
        if(num%2==0){
            num /= 2;
        }else{
            num -= 1;
        }
        return cal(num, cnt+1);
    }

    int numberOfSteps(int num) {
        int cnt = 0;
        // int res = cal(num, cnt);
        return cal(num, cnt);
    }
};