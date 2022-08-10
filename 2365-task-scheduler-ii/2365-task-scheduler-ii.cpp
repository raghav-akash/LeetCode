class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int n) {
        map<long long int,long long int> mp;
        long long time=0;
        int ind=0;
        while(ind<tasks.size())
        {
            time++;
            if(mp.find(tasks[ind])==mp.end())
            {
                mp[tasks[ind]]=time+n+1;
            }
            else
            {
                time=max(time, mp[tasks[ind]]);
                mp[tasks[ind]]=time+n+1; 
            }
            ind++;
        }
        
        return time;
         
    }
};