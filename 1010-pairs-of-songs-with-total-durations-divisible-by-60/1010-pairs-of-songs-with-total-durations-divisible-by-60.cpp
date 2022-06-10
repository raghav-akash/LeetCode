class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> vc(60,0);
        int cnt=0;
        int n=time.size();
        for(int i=0;i<n;i++)
        {
            int rem=time[i]%60;
            if(rem==0)
                cnt+=vc[0];
            else
                cnt+=vc[60-rem];
            
            vc[rem]++;
        }
        return cnt;
    }
};