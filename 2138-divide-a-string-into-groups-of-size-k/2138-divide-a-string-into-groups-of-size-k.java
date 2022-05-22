class Solution {
    public String[] divideString(String s, int k, char fill) {
        int extra, groups, n=s.length();
        groups=(int)Math.ceil((double)n/k);
        String result[]=new String[groups];
        extra=(groups*k)-n;
        for(int i=1; i<=extra; i++)
            s+=fill;
        for(int i=0, j=0; i<n; i+=k, j++)
            result[j]=s.substring(i, i+k);
        return result;
    }
}