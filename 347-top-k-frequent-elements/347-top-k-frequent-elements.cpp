class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        map<int,int> mp;
        vector<int> vc;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        
        for(auto it : mp)
        {
            pq.push({it.second,it.first});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        
        while(pq.size()>0)
        {
            vc.push_back(pq.top().second);
            pq.pop();
        }
        
        return vc;
    }
};