class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i, n=bits.size();
        for(i=0; i<n-1; i++) {
            if(bits[i]==1)
                i++;
        }
        return i==n-1 && bits[i]==0;
    }
};