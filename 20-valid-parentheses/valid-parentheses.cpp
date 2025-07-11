class Solution {
public:
  bool isValid(string s) {
    stack<char> st;
    for (char m : s) {
        if (m == '(' || m == '{' || m == '[') {
            st.push(m); 
        } else {
            if (st.empty()) return false; 
            char top = st.top();
            if ((m == ')' && top != '(') ||
                (m == '}' && top != '{') ||
                (m == ']' && top != '[')) {
                return false; 
            }
            st.pop(); 
        }
    }
    return st.empty(); 
}
};