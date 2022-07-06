class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> result;
        char startChar, endChar;
        int start, end;
        start=(int)s[1]-48;
        end=(int)s[4]-48;
        startChar=s[0];
        endChar=s[3];
        while(startChar<=endChar) {
            for(int i=start; i<=end; i++) {
                string str="";
                str+=startChar;
                str+=to_string(i);
                result.push_back(str);
            }
            startChar++;
        }
        return result;
    }
};