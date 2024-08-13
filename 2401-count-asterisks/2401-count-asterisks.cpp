class Solution {
public:
    int countAsterisks(string s) {
        int top=1;
        int count=0;

        for(char ch: s) {
            switch(ch) {
                case '*':
                    if(top>0)
                        count++;

                    break;
                case '|':
                    top *= -1;
            }
        }

        return count;
    }
};