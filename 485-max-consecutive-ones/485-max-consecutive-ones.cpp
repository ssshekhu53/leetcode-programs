class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max, count;
        max=count=0;
        for(int item: nums) {
            if(item==1) {
                count++;
                continue;
            }
            max=std::max(count, max);
            count=0;
        }
        max=std::max(count, max);
        return max;
    }
};