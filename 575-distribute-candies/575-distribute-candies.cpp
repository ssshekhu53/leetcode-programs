class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        int edible, count;
        count=0;
        edible=candyType.size()/2;
        for(int item: candyType)
            s.insert(item);
        return min(edible, (int)s.size());
    }
};