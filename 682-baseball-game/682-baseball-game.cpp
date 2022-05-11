class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> scores;
        int t1, t2, total=0;
        for(string op: ops) {
            if(op=="C")
                scores.pop();
            else if(op=="D") {
                t1=scores.top();
                scores.push(t1*2);
            }
            else if(op=="+") {
                t1=scores.top();
                scores.pop();
                t2=scores.top();
                scores.push(t1);
                scores.push(t1+t2);
            }
            else
                scores.push(stoi(op));
        }
        
        while(!scores.empty()) {
            total+=scores.top();
            scores.pop();
        }
        
        return total;
    }
};