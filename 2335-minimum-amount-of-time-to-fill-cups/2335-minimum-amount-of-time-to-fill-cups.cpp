class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq(amount.begin(),amount.end());
        int cnt=0;
        while(pq.top()!=0)
        {
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            pq.push(--x);
            pq.push(--y);
            cnt++;
        }
        
        return cnt;
    }
};