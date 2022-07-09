class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumLeft, sumRight, n;
        n=nums.size();
        for(int i=1; i<n; i++)
            nums[i]+=nums[i-1];
        for(int i=0; i<n; i++) {
            if(i==0)
                sumLeft=0;
            else
                sumLeft=nums[i-1];
            if(i==n-1)
                sumRight=0;
            else
                sumRight=nums[n-1]-nums[i];
            if(sumLeft==sumRight)
                return i;
        }
        return -1;
    }
};