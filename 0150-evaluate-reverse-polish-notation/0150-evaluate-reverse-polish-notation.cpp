class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        int i = 0;

        while(i<tokens.size()){
            st.push(tokens[i]);
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                string op = st.top();
                st.pop();
                int tmp1 = stoi(st.top());
                st.pop();
                int tmp2 = stoi(st.top());
                st.pop();

                if (op == "+") {
                    st.push(to_string(tmp2 + tmp1));
                } else if (op == "-") {
                    st.push(to_string(tmp2 - tmp1));
                } else if (op == "*") {
                    st.push(to_string(tmp2 * tmp1));
                } else if (op == "/") {
                    st.push(to_string(tmp2 / tmp1));
                }
            }
            i++;
        }
        return stoi(st.top());
    }
};