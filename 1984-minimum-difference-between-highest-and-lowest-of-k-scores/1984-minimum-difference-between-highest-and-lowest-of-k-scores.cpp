class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n, difference;
        n=nums.size();
        difference=INT_MAX;
        for(int i=0; i<(n-k+1); i++) 
            difference=min(abs(nums[i]-nums[i+k-1]), difference);
        return difference;
    }
};