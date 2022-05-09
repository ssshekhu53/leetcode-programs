class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> result;
        int minDiff=INT_MAX, n;
        n=arr.size();
        for(int i=0; i<n-1; i++)
            minDiff=min(minDiff, abs(arr[i]-arr[i+1]));
        for(int i=0; i<n-1; i++)
            if(abs(arr[i]-arr[i+1])==minDiff) {
                vector<int> temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
                result.push_back(temp);
            }
        return result;
    }
};