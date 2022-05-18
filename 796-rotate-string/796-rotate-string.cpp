class Solution {
public:
    bool rotateString(string s, string goal) {
        int i, j, n1, n2;
        string res="";
        i=j=0;
        n1=s.length();
        n2=goal.length();
        if(n1!=n2)
            return false;
        while(i<n1 && j<n2) {
            if(s[i]==goal[j]) {
                res+=s[i];
                i++;
                j++;
            }
            else
                i++;
        }
        i=0;
        while(i<n1 && j<n2) {
            res+=s[i];
            i++;
            j++;
        }
        // cout<<res;
        return res==goal;
    }
};