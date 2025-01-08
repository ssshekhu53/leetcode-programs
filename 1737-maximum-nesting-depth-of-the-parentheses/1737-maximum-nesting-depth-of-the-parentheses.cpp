class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxDepth = 0;

        for(char ch: s) {
            switch(ch) {
                case '(':
                st.push(ch);
                break;
                case ')':
                maxDepth = max((int)st.size(), maxDepth);
                st.pop();
                break;
            }
        }

        return maxDepth;
    }
};