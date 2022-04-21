class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> s;
        int idx1, idx2;
        idx2=0;
        for(int item: nums) {
            if(s.find(target-item)!=s.end())
                break;
            idx2++;
            s.insert(item);
        }
        idx1=0;
        for(int item: nums) {
            if((target-nums[idx2])==item)
                break;
            idx1++;
        }
        return {idx1, idx2};
    }
};