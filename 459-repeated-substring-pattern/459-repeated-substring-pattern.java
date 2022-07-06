class Solution {
    public boolean repeatedSubstringPattern(String s) {
        int n;
        String str;
        str=s+s;
        n=str.length();
        str=str.substring(1, n-1);
        if(str.indexOf(s)!=-1)
            return true;
        return false;
    }
}