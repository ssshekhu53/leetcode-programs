class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i, j, k, n1, n2;
        i=0;
        j=0;
        n1=s.size();
        n2=t.size();
        while(i<n1 && j<n1) {
            if(s[j]=='#') {
                while(j<n1 && s[j]=='#') {
                    if(i>0)
                        i--;
                    j++;
                }
            }
            else {
                s[i]=s[j];
                i++;
                j++;
            }
        }
        while(i++<n1)
            s.pop_back();
        i=j=0;
        while(i<n2 && j<n2) {
            if(t[j]=='#') {
                while(j<n2 && t[j]=='#') {
                    if(i>0)
                        i--;
                    j++;
                }
            }
            else {
                t[i]=t[j];
                i++;
                j++;
            }
        }
        while(i++<n2)
            t.pop_back();
        cout<<s<<" "<<t;
        return s==t;
    }
};