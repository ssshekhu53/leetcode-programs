class Solution {
    public boolean checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1; i*i<=num; i++)
            if(num%i==0)
                sum+=i+(i!=1?num/i:0);
        return num!=1?sum==num:false;
    }
}