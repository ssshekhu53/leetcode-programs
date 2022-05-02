class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i, j, count;
        count=0;
        i=g.size()-1;
        j=s.size()-1;
        while(i>=0 && j>=0) {
            if(g[i]<=s[j]) {
                i--;
                j--;
                count++;
            }
            else
                i--;
        }
        return count;
    }
};