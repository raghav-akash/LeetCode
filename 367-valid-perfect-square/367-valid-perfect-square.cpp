class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1,j=num/2;
        if(num==1) return true;
        while(i<=j)
        {
            long long int mid=i+(j-i)/2;
            long long int x=mid*mid;
            if(x==num) return true;
            else if(x>num) j=mid-1;
            else i=mid+1;
        }
        return false;
    }
};