class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag1, flag2;
        int n=nums.size();
        for(int i=1; i<n; i++) {
            flag1=(nums[i]>=nums[i-1]);
            if(!flag1)
                break;
        }
        
        for(int i=1; i<n; i++) {
            flag2=(nums[i]<=nums[i-1]);
            if(!flag2)
                break;
        }
        return flag1 || flag2;
    }
};