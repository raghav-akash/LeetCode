class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sumgas=0,sumcost=0;
        int n=gas.size();
        for(int i=0;i<n;i++)
        {
            sumgas+=gas[i];
            sumcost+=cost[i];
        }
        
        if(sumgas<sumcost) return -1;
        
        int total=0;
        int start=0;
        
        for(int i=0;i<n;i++)
        {
            total+=(gas[i]-cost[i]);
            
            if(total<0)
            {
                total=0;
                start=i+1;
            }
        }
        
        return start;
    }
};