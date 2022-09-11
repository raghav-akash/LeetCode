class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        int val=INT_MAX;
        int freq=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                mp[nums[i]]++;
            }
        }
        
        for(auto i:mp)
        {
            if(i.second>freq)
            {
                freq=i.second;
                val=i.first;
            }
            else if(i.second==freq)
            {
                freq=i.second;
                val=min(val,i.first);
            }
        }
        if(freq==0) return -1;
        return val;
    }
};