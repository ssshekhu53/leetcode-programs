class Solution {
    public boolean lemonadeChange(int[] bills) {
        // System.out.println();
        int changes5, changes10, changes20;
        changes5=changes10=changes20=0;
        for(int bill: bills) {
            switch(bill) {
                case 5:
                    changes5++;
                    break;
                case 10:
                    if(changes5<=0)
                        return false;
                    changes5--;
                    changes10++;
                    break;
                case 20:
                    if(!((changes5>=3) || (changes5>=1 && changes10>=1)))
                        return false;
                    changes5-=changes10==0?3:1;
                    changes10-=changes10==0?0:1;
                    changes20++;
                    break;
            }
        }
        return true;
    }
}