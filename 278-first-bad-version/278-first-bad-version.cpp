// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int result, start, end, mid;
        start=0;
        end=n;
        while(start<=end) {
            mid=(start+end)/2;
            if(isBadVersion(mid)) {
                result=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return result;
    }
};