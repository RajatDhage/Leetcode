class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int cnt = 0;
        int m = grid.size();   //no of rows
        int n = grid[0].size();   //no of. columns
        int no_of_island = 0;
        int no_of_ngb = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){   //whether this is island or not
                    no_of_island ++;
                    if(i-1>=0 && grid[i-1][j]==1){
                        no_of_ngb ++;
                    }
                    if(j-1>=0 && grid[i][j-1]==1){
                        no_of_ngb ++;
                    }
                }
            }
        }
        return (no_of_island*4 - no_of_ngb*2);
    }
};