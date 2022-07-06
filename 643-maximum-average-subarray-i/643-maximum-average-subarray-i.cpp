class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg, maxAvg, sum;
        int i, j, n;
        n=nums.size();
        sum=0;
        i=j=0;
        for(; i<k; i++)
            sum+=nums[i];
        avg=maxAvg=sum/k;
        for(; i<n; i++) {
            sum=(sum-nums[j++])+nums[i];
            avg=sum/k;
            maxAvg=max(maxAvg, avg);
        }
        return maxAvg;
    }
};