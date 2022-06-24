class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(k<arr[0]) return k;
        
        int l=0,r=arr.size(),mid;
        while(l<r)
        {
            mid=l+(r-l)/2;
            if(arr[mid]-mid-1<k)
                l=mid+1;
            else
                r=mid;
        }
        
        return l+k;
    }
};