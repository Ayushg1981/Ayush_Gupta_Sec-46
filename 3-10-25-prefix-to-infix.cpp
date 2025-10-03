class Solution {
  public:
    string ans(char op, string x, string y) {
        return "(" + x + string(1, op) + y + ")";
    }
    string preToInfix(string pre_exp) {
        stack<string> st;
        for (int i = pre_exp.size() - 1; i >= 0; i--) {
            char c = pre_exp[i];
            if (isalnum(c)) {  
                st.push(string(1, c));
            } else {
                string val1 = st.top(); st.pop();
                string val2 = st.top(); st.pop();
                st.push(ans(c, val1, val2));
            }
        }
        return st.top();
    }
};