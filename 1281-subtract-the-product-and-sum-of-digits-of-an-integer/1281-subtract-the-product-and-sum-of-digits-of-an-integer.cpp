class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pro=1;
        int a;
        while(n>0){
            a=n%10;
            pro=pro*a;
            sum=sum+a;
            n=n/10;
        }
        return (pro-sum);
    }
    
};