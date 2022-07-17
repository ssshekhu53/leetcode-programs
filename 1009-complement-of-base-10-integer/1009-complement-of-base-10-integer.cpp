class Solution {
public:
    int bitwiseComplement(int n) {
        int num, i, shift;
        num=0;
        i=1;
        shift=0;
        if(n==0)
            return 1;
        while(i<=n) {
            num=num|((n&i?0:1)<<shift);
            i*=2;
            shift++;
        }
        return num;
    }
};