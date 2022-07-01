class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=INT_MIN;
        for(auto i:accounts){
            int sum=0;
            for(int j=0;j<i.size();j++){
                sum+=i[j]; 
            }
            if(sum>=max){
                max=sum;
            }
        }
        return max;
    }
};