class Solution {
public:
    bool judgeCircle(string moves) {
        int x, y;
        x=y=0;
        for(char ch: moves) {
            switch(ch) {
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
                case 'L':
                    x--;
                    break;
                case 'R':
                    x++;
                    break;
            }
        }
        return x==0 && y==0;
    }
};