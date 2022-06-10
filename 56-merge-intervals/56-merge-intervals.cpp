class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> vc;
        sort(intervals.begin(),intervals.end());
        vc.push_back(intervals[0]);
        int j=0;
        for(int i=1;i<intervals.size();i++)
        {
            if(vc[j][1]>=intervals[i][0])
            {
                vc[j][1]=max(vc[j][1],intervals[i][1]);
            }
            else 
            {
                vc.push_back(intervals[i]);
                j++;
            }
        }
        return vc;
    }
};