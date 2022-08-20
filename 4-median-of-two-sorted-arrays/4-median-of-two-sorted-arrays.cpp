class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1, n2, i, j, mid;
        vector<int>nums3;
        n1=nums1.size();
        n2=nums2.size();
        i=j=0;
        while(i<n1 && j<n2) {
            if(nums1[i]<nums2[j])
                nums3.push_back(nums1[i++]);
            else if(nums1[i]>nums2[j])
                nums3.push_back(nums2[j++]);
            else {
                nums3.push_back(nums1[i++]);
                nums3.push_back(nums2[j++]);
            }
        }
        while(i<n1)
            nums3.push_back(nums1[i++]);
        while(j<n2)
            nums3.push_back(nums2[j++]);
        mid=(n1+n2)/2;
        if((n1+n2)%2==0)
            return (nums3[mid]+nums3[mid-1])/2.0;
        return nums3[mid];
    }
};