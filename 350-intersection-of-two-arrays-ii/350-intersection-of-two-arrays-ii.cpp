class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vc;
        if(nums1.size()>nums2.size())
        {
            vector<int> temp=nums2;
            nums2=nums1;
            nums1=temp;
        }
    
        sort(nums2.begin(),nums2.end());
        for(auto i:nums1)
        {
            int l=0,r=nums2.size()-1,mid;
            while(l<=r){
                mid=l+(r-l)/2;
                if(nums2[mid]==i)
                {
                    vc.push_back(i);
                    nums2.erase(nums2.begin()+mid);
                    break;
                }
                else if(nums2[mid]>i)
                {

                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
        }
        return vc;
    }
};