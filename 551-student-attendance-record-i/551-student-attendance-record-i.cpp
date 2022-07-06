class Solution {
public:
    bool checkRecord(string s) {
        stack<char> st;
        int countA, countL;
        countA=0;
        countL=1;
        for(char ch: s) {
            if(ch=='A')
                countA++;
            if(st.empty()) {
                st.push(ch);
                continue;
            }
            if(ch=='L' && st.top()=='L')
                countL++;
            else
                countL=1;
            if(countL>=3)
                return false;
            st.push(ch);
        }
        return (countA<2) && (countL<3);
    }
};