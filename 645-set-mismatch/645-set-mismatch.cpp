class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        int x, y, n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=1; i<n; i++) {
            if(nums[i]==nums[i-1]) {
                // result.push_back(nums[i]);
                x=nums[i];
                for(; i<n-1; i++) 
                    nums[i]=nums[i+1];
            }
        }
        for(int i=0; i<n; i++)
            if(nums[i]!=i+1) {
                y=i+1;
                break;
            }
        return {x, y};
    }
};