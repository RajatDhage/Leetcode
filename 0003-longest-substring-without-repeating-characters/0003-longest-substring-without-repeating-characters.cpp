class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> set;
        int maxLen = 0;
        int left = 0;
        for(int right=0;right<s.length();right++){

            if(!set.contains(s[right])){
                set.insert(s[right]);
                maxLen = max(maxLen, right-left+1);
            }
            else{
                while(s[left]!=s[right]){
                    set.erase(s[left]);
                    left++;
                }
                set.erase(s[left]);
                left++;
                set.insert(s[right]);
            }
        }
        return maxLen;
    }
};