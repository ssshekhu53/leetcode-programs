class RecentCounter {
private:
    int start, end;
    vector<int> requests;
public:
    RecentCounter() {
        start=end=0;
    }
    
    int ping(int t) {
        requests.push_back(t);
        if(requests.size()==1)
            return 1;
        if(t-3000<=requests[start])
            end++;
        else {
            while(requests[++start]<(t-3000));
            end++;
        }
        return (end-start)+1;
    }
}; 

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */