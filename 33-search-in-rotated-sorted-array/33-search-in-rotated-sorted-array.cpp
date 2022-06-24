class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid;
        while(l<r)
        {
            mid=l+(r-l)/2;
            if(nums[mid]<nums[r]) r=mid;
            else l=mid+1;
        }
        
        int mov=l,newmid;
        l=0,r=nums.size()-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            newmid=(mid+mov)%nums.size();
            if(nums[newmid]==target) return newmid;
            else if(nums[newmid]>target) r=mid-1;
            else l=mid+1;
        }
        
        return -1;
    }
};