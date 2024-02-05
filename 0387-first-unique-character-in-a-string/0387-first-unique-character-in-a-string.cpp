class Solution {
public:
    int firstUniqChar(string s) {

        //M1: can be done using map
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }

        int i = 0;
        while(mp[s[i]]>1 && i<s.size()){
            i++;
        }
        int ans = i<s.size() ? i : -1;
        return ans;

        // char temp;
        // int flag;
        // int i=0;
        // for(;i<s.length();i++)
        // {
        //     flag=0;
        //     temp = s[i];
        //     for(int j=0;j<s.length();j++)
        //     {
        //         if(j==i)
        //         continue;

        //         else if(s[j]==temp)
        //         {
        //             flag=1;
        //             break;
        //         }  
        //     }
        //     if(flag==0)
        //     return i;
        // }
        // if(flag==1)
        // return -1;

        // return -1;  

        // int st=0, end=s.length()-1;
        // int itr = s.length()-1;
        // int final = 0, flag;
        // int init = 0; //initiator
        // while(st < end)
        // {
        //     flag=0;
        //     if(s[itr]!=s[init] && s[init]!=s[st] && itr>init)
        //     {
        //         // if(st==init)
        //         // continue;
                
        //         itr--;
        //     }
        //     else if(s[itr] == s[init])
        //     {
        //         flag = 1;
        //         st++;
        //         itr = end;
        //         init = 0;
        //     }
        //     if(itr == st+1 && flag==0)
        //     {
        //         final = 1;
        //         return st;
        //     }
        // }  
        // if(final==0 && flag==1)
        // return -1;

        // return -1;
    }
};