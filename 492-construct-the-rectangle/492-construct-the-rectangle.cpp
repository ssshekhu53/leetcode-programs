class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> result;
        double root=sqrt(area);
        int tempRoot;
        if(ceil(root)==floor(root))
            return {(int)root, (int)root};
        else {
            for(int i=root; i>=1; i--)
                if(area%i==0) {
                    result.push_back(max(area/i, i));
                    result.push_back(min(area/i, i));
                    break;
                }
        }
        return result;
    }
};