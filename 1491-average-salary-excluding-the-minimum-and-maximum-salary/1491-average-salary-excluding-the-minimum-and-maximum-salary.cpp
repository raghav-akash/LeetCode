class Solution {
public:
    double average(vector<int>& salary) {
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int sum=0;
        int n=salary.size();
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
            maxi=max(maxi,salary[i]);
            mini=min(mini,salary[i]);
        }
        
        sum-=(maxi+mini);
        
        return (double)sum/(n-2);
    }
};