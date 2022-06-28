class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int pairs=0;
        for(int num: nums)
            m[num]++;
        for(auto item: m)
            pairs+=item.second*(item.second-1)/2;
        return pairs;
    }
};