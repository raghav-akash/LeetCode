class Solution {
public:
    int arrangeCoins(int n) {
        long long int left=0,right=n;
        long long int x,mid;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            x=mid*(mid+1)/2;
            
            if(x==n) return (int)mid;
            
            if(n<x)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        return (int)right;
    }
};