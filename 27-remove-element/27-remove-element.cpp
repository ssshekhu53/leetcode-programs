class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n;) {
            if(nums[i]==val) {
                int k=i;
                count++;
                for(int j=i+1; j<n; j++) {
                    nums[k++]=nums[j];
                }
                n--;
            }
            else i++;
        }
        return nums.size()-count;
    }
};