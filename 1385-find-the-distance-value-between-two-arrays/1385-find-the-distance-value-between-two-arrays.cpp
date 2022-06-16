class Solution {
public:
    bool distance(int num,vector<int> &vc,int d)
    {
        int l=0,r=vc.size()-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(abs(num-vc[mid])<=d) return false;
            else if(vc[mid]>num) r=mid-1;
            else l=mid+1;
        }
        return true;
    }
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(),arr2.end());
        int cnt=0;
        for(int i:arr1)
        {
            if(distance(i,arr2,d))
            {
                cnt++;
            }
        }
        return cnt;
    }
};