class Solution {
    public int titleToNumber(String columnTitle) {
        int columnNumber, base, n;
        n=columnTitle.length();
        columnNumber=0;
        base=1;
        while(--n>=0) {
            columnNumber+=base*(columnTitle.charAt(n)-65+1);
            base*=26;
        }
        return columnNumber;
    }
}