class Solution {
public:
    int findComplement(int num) {
        unsigned long int result=0;
        unsigned long int bit=1;
        unsigned long int shift=0;
        while(bit<=num) {
            result=result | ((num&bit?0:1)<<shift);
            bit=bit<<1;
            shift++;
        }
        return result;
    }
};
