class Solution {
public:
    bool hasAlternatingBits(int n) {
        long int flag, i, temp;
        i=1;
        flag=!(n&i);
        i=i<<1;
        while(i<=n) {
            temp=i&n?1:0;
            if(temp!=flag)
                return false;
            flag=!temp;
            i=i<<1;
        }
        return true;
    }
};