class Solution {
    static boolean isSelfDividing(int num) {
        int temp, rem;
        temp=num;
        while(temp>0) {
            rem=temp%10;
            if(rem==0)
                return false;
            if(num%rem!=0)
                return false;
            temp/=10;
        }
        return true;
    }
    
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> result=new ArrayList<Integer>();
        while(left<=right) {
            if(Solution.isSelfDividing(left))
                result.add(left);
            left++;
        }
        return result;
    }
}