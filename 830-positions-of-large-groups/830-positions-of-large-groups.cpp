class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> result;
        int count, n=s.length();
        for(int i=0; i<n;) {
            int j=i+1;
            count=1;
            while(j<n && s[i]==s[j]) {
                j++;
                count++;
            }
            if(count>=3) {
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(j-1);
                result.push_back(temp);
                i=j;
            } 
            else
                i++;
        }
        return result;
    }
};