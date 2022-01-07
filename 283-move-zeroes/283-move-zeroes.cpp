class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       queue<int> q;
        int n;
        n=nums.size();
        for(int i: nums) 
            if(i!=0)
                q.push(i);
        int i=0;
        while(!q.empty()){
            nums[i++]=q.front();
            q.pop();
        }
        while(i<n)
            nums[i++]=0; 
    }
};