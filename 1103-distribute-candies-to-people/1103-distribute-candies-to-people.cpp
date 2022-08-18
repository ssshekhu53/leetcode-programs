class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> result(num_people);
        int i, j;
        i=1;
        j=0;
        while(i<=candies) {
            result[j]+=i;
            candies-=i;
            i++;
            j++;
            if(j==num_people)
                j=0;
        }
        result[j]+=candies;
        return result;
    }
};