class Solution {
public:
    double average(vector<int>& salary) {
        int maxSalary, minSalary, n;
        maxSalary=minSalary=salary[0];
        n=salary.size();
        double sum=0;
        for(int item: salary) {
            sum+=item;
            maxSalary=max(maxSalary, item);
            minSalary=min(minSalary, item);
        }
        sum-=(maxSalary+minSalary);
        return sum/(n-2);
    }
};