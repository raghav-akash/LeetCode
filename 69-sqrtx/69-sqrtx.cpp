#define ll long long int

class Solution {
public:
    ll mySqrt(int x) {
        ll j=0,a=0,i=1;
        while(a<=x){
            a=i*i;
            if(a>=x){
                j=i-1;
            }
            i++;
        }
        return j;
    }
};