class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n, count;
        n=nums.size();
        count=0;
        for(int i=1; i<n-1;) {
            if(nums[i-1]<nums[i]) {
                int j=i+1;
                while(j<n && nums[j]==nums[i])
                    j++;
                if(j<n) {
                    count+=j-i;
                    i=j-1;
                }
            }
            i++;
        }
        return count;
    }
};