class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i=0;
        char ch;
        while(i<n/2) {
            ch=s[i];
            s[i]=s[n-(i+1)];
            s[n-(i+1)]=ch;
            i++;
        }
    }
};