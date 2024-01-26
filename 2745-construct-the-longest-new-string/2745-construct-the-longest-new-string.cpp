class Solution {
public:
    int longestString(int x, int y, int z) {
        if(min(x,y)==max(x,y)){
            return min(x,y)*4 + z*2 ;
        }
        return min(x,y)*4 + z*2 + 2;
    }
};