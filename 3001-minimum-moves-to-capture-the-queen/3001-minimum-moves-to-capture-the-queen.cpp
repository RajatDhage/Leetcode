class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        
        //Rook and queen in a same row and simultaneously checking bishop is not in between
        if((a==e && a!=c) || (a==e && (d>max(b,f) || d<min(b,f)))){  
            return 1;
        }
        
        //Rook and queen in a same column and simultaneously checking bishop is not in between
        else if((b==f && d!=b) || (b==f && (c>max(a, e) || c<min(a, e)))){
            return 1;
        }

        //if bishop and queen are in same diagonal and checking rook is not in between
        else if((abs(e-c)==abs(f-d)) && ((a>max(c, e)||a<min(c, e)) || (b>max(d, f)||b<min(d,f)) || abs(a-c)!=abs(b-d))){
            return 1;
        }
        
        //else we can capture queen in two moves by the rook
        return 2;
    }
};