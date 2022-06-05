class Solution {
public:
    static bool isAlpha(char ch);
    
    string reverseOnlyLetters(string s) {
        int i, j;
        i=0;
        j= s.length()-1;
        while(i<j) {
            if(Solution::isAlpha(s[i]) && Solution::isAlpha(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(Solution::isAlpha(s[i]))
                j--;
            else
                i++;
        }
        return s;
    }
};

bool Solution::isAlpha(char ch) {
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
        return true;
    return false;
}