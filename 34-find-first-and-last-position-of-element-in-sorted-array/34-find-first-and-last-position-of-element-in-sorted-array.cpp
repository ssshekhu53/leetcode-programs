class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int idx=-1;
        int start, end, mid;
        start=0;
        end=nums.size()-1;
        while(start<=end) {
            mid=(start+end)/2;
            if(nums[mid]==target) {
                idx=mid;
                break;
            }
            else if(nums[mid]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        if(idx==-1)
            return {-1, -1};
        start=0;
        end=mid;
        result.push_back(idx);
        while(start<=end) {
            mid=(start+end)/2;
            if(nums[mid]==target) {
                result[0]=min(mid, result[0]);
                end=mid-1;
            }
            else if(nums[mid]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        start=result[0];
        end=nums.size()-1;
        result.push_back(idx);
        while(start<=end) {
            mid=(start+end)/2;
            if(nums[mid]==target) {
                result[1]=max(mid, result[1]);
                start=mid+1;
            }
            else if(nums[mid]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return result;
    }
};