class Solution {
public:
    int longestString(int x, int y, int z) { 
        return min(x,y)==max(x,y) ? min(x,y)*4 + z*2 : min(x,y)*4 + z*2 + 2;
    }
};