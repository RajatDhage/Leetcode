class Solution {
public:
    double myPow(double x, int n) {
        if(n<0){
            x = 1/x;
        }
        
        long nn = abs(n);

        double result = 1;  //accumulator
        while(nn){
            if(nn&1){   //no is odd
                result *= x;        
            }
            nn = nn>>1;
            x *= x;
        }
        return result;
    }
};