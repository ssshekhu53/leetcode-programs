class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        int n, minCost;
        n=cost.size();
        minCost=0;
        if(n==1)
            return cost[0];
        for(int i=n-1; i>=2; i-=3) 
            minCost+=cost[i]+cost[i-1];
        if(n%3!=0) {
            for(int i=0; i<n%3; i++)
                minCost+=cost[i];
        }
        return minCost;
    }
};