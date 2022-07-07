class Solution {
    public int findLengthOfLCIS(int[] nums) {
        int curlen, maxLen, n;
        maxLen=0;
        curlen=1;
        n=nums.length;
        for(int i=1; i<n; i++)
            if(nums[i]>nums[i-1])
                curlen++;
            else {
                maxLen=Math.max(maxLen, curlen);
                curlen=1;
            }
        maxLen=Math.max(maxLen, curlen);
        return maxLen;
    }
}