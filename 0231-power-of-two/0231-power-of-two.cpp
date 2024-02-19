class Solution {
public:
    bool isPowerOfTwo(int n) {
        //M1: Bit manipulation
        if(n<=0){   
            return false;
        }
        // logic is there is only one set bit in number which is power of 2
        return ((n&(n-1))==0); 
        
        //M2: Brute force
        // int quo=0;
        // if(n==1)
        // return true;
        // else{
        //     while(n)
        //     {
        //         if(n%2==0)
        //         {quo=n/2;}
        //        else if(quo!=1)
        //        break;

        //         n=n/2;
        //     }
        // if(quo==1 && n%2==0)
        // return true;
        // else
        // return false;
        // }
     
    }
};