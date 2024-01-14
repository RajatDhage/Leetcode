class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
       vector<int> beautifulIndices;

        int n = s.length();
        
        if(n>a.length() && n>b.length()){
            vector<int> bIndices;
            for (int i = 0; i <= n - b.length(); ++i) {
                if (s.substr(i, b.length()) == b) {
                    bIndices.push_back(i);
                }
            }

            for (int i = 0; i <= n - a.length(); ++i) {
                if (s.substr(i, a.length()) == a) {
                    for (int j : bIndices) {
                        if (abs(i - j) <= k) {
                            beautifulIndices.push_back(i);
                            break;
                        }
                    }
                }
            }
        }
       
        return beautifulIndices;
    }
};