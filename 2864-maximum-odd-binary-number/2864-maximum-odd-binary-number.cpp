class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int cnt = 0;
        for(auto i:s){
            if(i=='1'){
                cnt++;
            }
        }
        string ans = "";

        int temp = cnt-1;
        while(temp){
            ans += '1';
            temp--;
        }
        int tmp = (s.size()-cnt);
        while(tmp--){
            ans += '0';
        }
        ans += '1';
        
        return ans;
    }
};