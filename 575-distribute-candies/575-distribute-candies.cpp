class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> s(candyType.begin(), candyType.end());
        int edible, count;
        edible=candyType.size()/2;
        return min(edible, (int)s.size());
    }
};