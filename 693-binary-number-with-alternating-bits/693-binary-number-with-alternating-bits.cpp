class Solution {
public:
    bool hasAlternatingBits(int num) {
        unsigned long long int n=num;
        unsigned long long int i=n+(n>>1);
        return (i&(i+1))==0;
    }
};