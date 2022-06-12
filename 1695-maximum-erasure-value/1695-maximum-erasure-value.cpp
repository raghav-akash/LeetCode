class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
      map<int,bool> mp;
      int n=nums.size();
      int l=0,r=0;
      int curr_sum=0,maxx=0;
      for(int r=0;r<n;r++)
      {
          while(mp[nums[r]])
          {
              curr_sum-=nums[l];
              mp[nums[l++]]=false;
          }
      mp[nums[r]]=true;
      curr_sum+=nums[r];
      maxx=max(maxx,curr_sum);
      }
      return maxx;
    }
};