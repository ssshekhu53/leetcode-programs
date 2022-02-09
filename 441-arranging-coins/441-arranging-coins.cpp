class Solution {
public:
    int arrangeCoins(int n) {
        return floor((-1+sqrt(1+((unsigned long int)8*(unsigned long int)n)))/2);
    }
};