class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size();i++)
        {
            int l=0,r=nums.size()-1,mid,index=nums.size();
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(nums[mid]>=i)
                {
                    index=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            if((nums.size()-index)==i) return i;
        }
        return -1;
    }
    
};