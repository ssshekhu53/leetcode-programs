class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n, i, count, flag;
        n=arr.size();
        count=0;
        if(arr.size()<3)
            return false;
        for(i=1; i<n; i++) {
            if(arr[i]==arr[i-1])
                return false;
            else if(arr[i]<arr[i-1]) {
                count++;
                flag=1;
                for(; i<n; i++, flag++)
                    if(arr[i]>=arr[i-1])
                        return false;
            }
        }
        // cout<<flag;
        return count==1 && flag!=n;
    }
};