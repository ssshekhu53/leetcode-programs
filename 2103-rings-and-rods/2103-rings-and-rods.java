class Solution {
    public int countPoints(String rings) {
        int count, n=rings.length();
        int rods[]=new int[10];
        Arrays.fill(rods, 0);
        for(int i=0; i<n; i+=2) {
            char color=rings.charAt(i);
            int rod=rings.charAt(i+1)-48;
            switch(color) {
                case 'R':
                    rods[rod]=rods[rod] | 1;
                    break;
                case 'G':
                    rods[rod]=rods[rod] | 2;
                    break;
                case 'B':
                    rods[rod]=rods[rod] | 4;
                    break;
            }
        }
        count=0;
        for(int item: rods)
            count+=item==7?1:0;
        return count;
    }
}