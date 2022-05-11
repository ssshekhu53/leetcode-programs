class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> m;
        int curCount;
        for(char ch: s)
            m[ch]++;
        curCount=m[s[0]];
        for(char ch: s)
            if(m[ch]!=curCount)
                return false;
        return true;
    }
};