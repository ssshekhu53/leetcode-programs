class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines, width, curwidth;
        lines=1;
        width=0;
        for(char ch: s) {
            curwidth=width+widths[(int)ch-97];
            if(curwidth>100) {
                lines++;
                width=widths[(int)ch-97];
                // cout<<curwidth<<endl;
                continue;
            }
            width=curwidth;
        }
        return {lines, width};
    }
};