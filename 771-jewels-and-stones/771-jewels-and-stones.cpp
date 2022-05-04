class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> m;
        int count=0;
        for(char ch: jewels)
            m[ch]=0;
        for(char ch: stones)
            if(m.find(ch)!=m.end())
                m[ch]++;
        for(auto item: m)
            count+=item.second;
        return count;
    }
};