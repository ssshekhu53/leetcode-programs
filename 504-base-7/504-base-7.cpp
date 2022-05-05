class Solution {
public:
    string convertToBase7(int num) {
        if(num==0)
            return "0";
        string result="";
        string sign=num<0?"-":"";
        num=abs(num);
        while(num) {
            result=(char)((num%7)+48)+result;
            num/=7;
        }
        result=sign+result;
        return result;
    }
};