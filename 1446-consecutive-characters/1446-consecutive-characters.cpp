class Solution {
public:
    int maxPower(string s) {
        int n, count, max;
        char cur;
        count=max=0;
        n=s.length();
        cur=s[0];
        for(int i=1; i<n; i++) {
            if(s[i]==cur) {
                count++;
                if(count==1)
                    count++;
                continue;
            }
            max=std::max(count, max);
            count=0;
            if(s[i]!=' ')
                cur=s[i];
        }
        max=std::max(count, max);
        return max!=0?max:1;
    }
};