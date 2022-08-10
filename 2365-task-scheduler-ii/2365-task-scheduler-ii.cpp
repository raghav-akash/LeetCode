class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int n) {
        map<long long int,long long int> mp;
        long long time=0;
        for(int i:tasks)
        {
            time++;
            if(mp.find(i)==mp.end())
            {
                mp[i]=time+n+1; 
            }
            else
            {
                time=max(time,mp[i]);
                mp[i]=time+n+1;
            }
        }
        
        return time;
         
    }
};