/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        unsigned int start, end, mid;
        int guessResult;
        start=1;
        end=n;
        while(start<end) {
            mid=(start+end)/2;
            guessResult=guess(mid);
            if(guessResult==0)
                return mid;
            else if(guessResult==1)
                start=mid+1;
            else
                end=mid;
        }
        return (start+end)/2;
    }
};