class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int rock) {
        vector<int> vc;
        int cnt=0;
        int n=capacity.size();
        for(int i=0;i<n;i++)
        {
            vc.push_back(capacity[i]-rocks[i]);
        }
        sort(vc.begin(),vc.end());
        for(auto i:vc)
        {
            if(i==0) cnt++;
            else if(rock>=i) cnt++, rock-=i;
        }
        
        return cnt;
    }
};