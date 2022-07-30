class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> mp;
        priority_queue<int> pq;
        queue<pair<int,int>> q;
        int time=0;
        for(auto x: tasks)
        {
            mp[x]++;
        }
        
        for(auto x: mp)
        {
            pq.push(x.second);
        }
        
        int cnt=0;
        while(!pq.empty() || !q.empty())
        {
            time++;
            
            if(!pq.empty())
            {
                cnt=pq.top();
                pq.pop();
                cnt--;
                if(cnt)
                {
                    q.push({cnt,time+n});
                }
            }
            
            if(!q.empty() && q.front().second==time)
            {
                pq.push(q.front().first);
                q.pop();
            }
        }
        
        return time;
         
    }
};