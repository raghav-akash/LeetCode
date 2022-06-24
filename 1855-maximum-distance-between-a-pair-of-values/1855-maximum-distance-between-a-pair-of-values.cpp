class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int maxx=0,n=min(nums1.size(),nums2.size());
        for(int i=0;i<n;i++)
        {
            int k=nums1[i];
            int l=i,r=nums2.size()-1,mid;
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(nums2[mid]>=k)
                {
                    l=mid+1;
                    maxx=max(maxx,mid-i);
                }
                else
                {
                    r=mid-1;
                }
            }
        }
        return maxx;
    }
};