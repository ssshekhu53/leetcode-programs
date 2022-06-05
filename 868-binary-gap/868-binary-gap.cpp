class Solution {
public:
    int binaryGap(int n) {
        int prev, maxDiff;
        int i, pos;
        prev=maxDiff=0;
        i=1;
        pos=1;
        while(i<=n) {
            if(i&n) {
                if(prev==0) 
                    prev=pos;
                else {
                    maxDiff=max(pos-prev, maxDiff);
                    prev=pos;
                }
            }
            i=i<<1;
            pos++;
        }
        return maxDiff;
    }
};