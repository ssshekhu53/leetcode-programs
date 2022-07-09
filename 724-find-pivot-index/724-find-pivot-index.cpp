class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumLeft, sumRight, n;
        sumLeft=0;
        sumRight=0;
        n=nums.size();
        for(int i=1; i<n; i++)
            sumRight+=nums[i];
        for(int i=1; i<n; i++) {
            if(sumLeft==sumRight)
                return i-1;
            sumLeft+=nums[i-1];
            sumRight-=nums[i];
        }
        if(sumLeft==sumRight)
            return n-1;
        return -1;
    }
};