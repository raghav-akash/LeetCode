class Solution {
public:
    int climbStairs(int n) {
        vector<int> vc(n+1,0);
        vc[0]=1;
        vc[1]=1;
        for(int i=2;i<=n;i++)
            vc[i]=vc[i-1]+vc[i-2];
        
        return vc[n];
    }
};