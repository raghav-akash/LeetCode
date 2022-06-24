class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==0 || c==1) return true;
        for(long long i=0;i*i<=c;i++)
        {
            long long b=c-(i*i);
            long long l=0,r=i;
            while(l<=r)
            {
                long long mid=l+(r-l)/2;
                if(mid*mid==b) return true;
                else if(mid*mid>b) r=mid-1;
                else l=mid+1;
            }
        }
        return false;
    }
};