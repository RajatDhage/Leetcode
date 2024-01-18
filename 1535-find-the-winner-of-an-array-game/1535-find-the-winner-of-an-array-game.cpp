class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int winner = arr[0], wins = 0;
        for(int i=1;i<arr.size();i++){
            if(winner>arr[i]){
                wins ++;
            }
            else{
                winner = arr[i];
                wins = 1;  ///if we are in else condition that means current element already defeated one element previously
            }

            if(wins == k){
                break;
            } 
        }
        return winner;
    }
};