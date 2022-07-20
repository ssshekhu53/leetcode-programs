class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected(heights);
        int count, n;
        count=0;
        n=heights.size();
        sort(expected.begin(), expected.end());
        for(int i=0; i<n; i++)
            if(heights[i]!=expected[i])
                count++;
        return count;
    }
};