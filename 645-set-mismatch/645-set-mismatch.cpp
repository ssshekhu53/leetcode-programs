class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        unordered_set<int> s;
        int n=nums.size();
        for(int i: nums) {
            if(s.find(i)!=s.end())
                result.push_back(i);
            s.insert(i);
        }
        for(int i=1; i<=n; i++)
            if(s.find(i)==s.end())
                result.push_back(i);
        return result;
    }
};