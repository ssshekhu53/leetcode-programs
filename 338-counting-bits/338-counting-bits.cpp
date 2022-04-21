class Solution {
public:
    int countSetBits(int n) {
        if(n==0)
            return 0;
        return (n&1)+countSetBits(n>>1);
    }
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i=0; i<=n; i++)
            result.push_back(countSetBits(i));
        return result;
    }
};