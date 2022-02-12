class Solution {
public:
    int hammingDistance(int x, int y) {
        unsigned int xorValue=x^y;
        unsigned int i=1, count=0;
        while(i<=xorValue) {
            count+=xorValue&i?1:0;
            i<<=1;
        }
        return count;
    }
};