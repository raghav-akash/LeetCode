class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> vc(2,-1);
        int low=0,high=nums.size()-1,res=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if (nums[mid]>target) 
                high=mid-1;
            else if(nums[mid]<target)
                low=mid+1;
            else
            {
                res=mid;
                high=mid-1;
            }
        }
        vc[0]=res;
        low=0,high=nums.size()-1,res;
        while(low<=high)
        {
            int mid = (low + high) / 2;
            if (nums[mid]>target) 
                high=mid-1;
            else if(nums[mid]<target)
                low=mid+1;
            else
            {
                res=mid;
                low=mid+1;
            }
        }
        vc[1]=res;
        
        return vc;
    }
};