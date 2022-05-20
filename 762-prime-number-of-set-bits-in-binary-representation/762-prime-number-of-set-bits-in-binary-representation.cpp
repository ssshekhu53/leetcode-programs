class Solution {
public:
    int countSetBits(int n) {
        int count=0, i=1;
        while(i<=n) {
            count+=n&i?1:0;
            i=i<<1;
        }
        return count;
    }
    int countPrimeSetBits(int left, int right) {
        int setBits, count=0;;
        while(left<=right) {
            setBits=countSetBits(left);
            if(setBits==2 || setBits==3 || setBits==5 || setBits==7 || setBits==11 || setBits==13 || setBits==17 || setBits==19)
                count++;
            left++;
        }
        return count;
    }
};