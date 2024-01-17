class Solution {
public:
    string truncateSentence(string s, int k) {
        string res = "";
        int i = 0;
        int cnt = 0;
        while(k>0 && i<s.size()){      
            if(s[i]==' '){
                cnt++;
            }
            if(cnt == k){
                return res;
            }
            res += s[i];
            i++;
        }
        return res;
    }
};