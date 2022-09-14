class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int p=0;
        int g=0;
        int m=0;
        int pi=0,mi=0,gi=0;
        for(int i=0;i<garbage.size();i++)
        {
            for(int j=0;j<garbage[i].length();j++)
            {
                if(garbage[i][j]=='P')
                {
                    p+=1;
                    pi=i;
                }
                else if(garbage[i][j]=='G')
                {
                    g+=1;
                    gi=i;
                }
                else
                {
                    m+=1;
                    mi=i;
                }
            }
        }
        vector<int> tsum(travel.size());
        tsum[0]=travel[0];
        for(int i=1;i<tsum.size();i++)
        {
            tsum[i]=tsum[i-1]+travel[i];
        }
        
        if(pi>0)
        {
            p+=tsum[pi-1];
        }
        if(gi>0)
        {
            g+=tsum[gi-1];
        }
        if(mi>0)
        {
            m+=tsum[mi-1];
        }
        return p+g+m;
        
    }
};