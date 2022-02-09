class Solution {
public:
    static bool isVowel(char ch) {
        return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u') || (ch == 'A') || (ch == 'E') ||(ch == 'I') ||(ch == 'O') ||(ch == 'U');
    }
    
    string reverseVowels(string s) {
        int i, j, n;
        n=s.length();
        i=0;
        j=n-1;
        while(i<j) {
            if(isVowel(s[i])) {
                while(j>i && j>0 && !isVowel(s[j--]));
                if(isVowel(s[j+1]))
                    swap(s[i], s[j+1]);
            }
            i++;
        }
        return s;
    }
};