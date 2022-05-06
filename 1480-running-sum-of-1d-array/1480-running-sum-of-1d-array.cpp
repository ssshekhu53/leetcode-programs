class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>result;
        int n=nums.size();
        result.push_back(nums[0]);
        for(int i=1; i<n; i++)
            result.push_back(nums[i]+result[i-1]);
        return result;
    }
};