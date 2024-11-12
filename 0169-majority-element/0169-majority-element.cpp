class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element, count;

        count = 0;
        
        for(int n: nums) {
            if(count == 0) {
                element = n;
                count++;

                continue;
            }

            if(element == n) count++;
            else count--;
        }

        return element;
    }
};