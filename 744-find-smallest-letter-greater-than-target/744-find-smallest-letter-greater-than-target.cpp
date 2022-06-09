class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start, end, mid;
        start=0;
        end=letters.size()-1;
        while(start<=end) {
            if(letters[start]>target)
                return letters[start];
            start++;
        }
        return letters[0];
    }
};