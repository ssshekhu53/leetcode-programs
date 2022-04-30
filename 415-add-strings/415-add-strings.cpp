class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1, n2;
        unsigned int carry, temp;
        string result="";
        carry=0;
        n1=num1.length()-1;
        n2=num2.length()-1;

        while(n1>=0 && n2>=0) {
            temp=(((unsigned int)num1[n1]-48)+((unsigned int)num2[n2]-48)+carry)%10;
            carry=(((unsigned int)num1[n1]-48)+((unsigned int)num2[n2]-48)+carry)/10;
            result+=((char)temp+48);
            n1--;
            n2--;
        }
        
        while(n1>=0) {
            temp=(((unsigned int)num1[n1]-48)+carry)%10;
            carry=(((unsigned int)num1[n1]-48)+carry)/10;
            result+=((char)temp+48);
            n1--;
        }
        
        while(n2>=0) {
            temp=(((unsigned int)num2[n2]-48)+carry)%10;
            carry=(((unsigned int)num2[n2]-48)+carry)/10;
            result+=((char)temp+48);
            n2--;
        }
        
        if(carry!=0)
            result+=((char)carry+48);
        
        reverse(result.begin(), result.end());
        return result;
    }
};