class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX;
        int max=INT_MIN;
        int profit=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            if(min>=prices[i]){
                min=prices[i];
                max=0;
            }
            
            if(max<=prices[i]){
                max=prices[i];
            }
            
            if(profit<=(max-min))
            {
                profit=max-min;
            }
        }
        cout<< max<<" "<<min;
        return profit;
    }
};