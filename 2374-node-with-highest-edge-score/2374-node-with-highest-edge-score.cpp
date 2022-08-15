class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n=edges.size();
        vector<long long int> vc(n,0);
        
        for(int i=0;i<n;i++)
        {
            vc[edges[i]]+=i;
        }
        
        long long int maxx=0;
        int ans=0;
        for(int j=n-1;j>=0;j--)
        {
            if(vc[j]>=maxx)
            {
                maxx=vc[j];
                ans=j;
            }
        }
        
        return ans;
    }
};