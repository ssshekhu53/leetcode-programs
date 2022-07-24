class Solution {
public:
    static bool isVowel(char ch);
    
    bool halvesAreAlike(string s) {
        int n, count;
        n=s.length();
        count=0;
        for(int i=0; i<n/2; i++) {
            count+=Solution::isVowel(s[i])?1:0;
            count-=Solution::isVowel(s[(n/2)+i])?1:0;
        }
        return count==0;
    }
};

bool Solution::isVowel(char ch) {
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
}