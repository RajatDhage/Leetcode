class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();  //no. of rows
        int n = mat[0].size(); //no. of columns

        int cnt = 0, pos = -1; //pos is position of 1 in that row
        int res = 0;
        for(int i=0;i<m;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(mat[i][j] == 1){
                    cnt++;
                    pos = j;
                }
            }

            if(cnt == 1){
                cnt = 0;
                int knt = 0;   //using another variable to claculate count of 1 in respective column
                for(int k=0;k<m;k++){  //checking for 1 in that column
                    if(mat[k][pos]==1){
                        knt++;
                    }
                }
                if(knt==1)
                res++;
            }
        }
        return res;
    }
};