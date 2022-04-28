class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        int i, j, n1, n2;
        i=j=0;
        n1=ransomNote.length();
        n2=magazine.length();
        while(i<n1 && j<n2) {
            if(ransomNote[i]==magazine[j]) {
                i++;
                j++;
            }
            else if(ransomNote[i]<magazine[j])
                return false;
            else
                j++;
        }
        return i>=n1?true:false;
    }
};