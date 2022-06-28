class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max, min, mid, n;
        n=nums.size();
        max=*max_element(nums.begin(), nums.end());
        min=*min_element(nums.begin(), nums.end());
        mid=(max+min)/2;
        // cout<<mid<<endl;
        for(int i=0; i<n; i++) {
            if(nums[i]<mid) {
                if(nums[i]+k>=mid)
                    nums[i]=mid;
                else
                    nums[i]+=k;
            }
            else if(nums[i]>mid) {
                if(nums[i]-k<=mid)
                    nums[i]=mid;
                else
                    nums[i]-=k;
            }
            // cout<<nums[i]<<" ";
        }
        
        max=*max_element(nums.begin(), nums.end());
        min=*min_element(nums.begin(), nums.end());
        return max-min;
    }
};