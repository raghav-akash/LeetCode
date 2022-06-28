class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> vc(cost.size());
        int n=cost.size();
        vc[0]=cost[0];
        vc[1]=cost[1];
        for(int i=2;i<cost.size();i++)
        {
            vc[i]=cost[i]+min(vc[i-1],vc[i-2]);
        }
        
        return min(vc[n-1],vc[n-2]) ;
    }
};