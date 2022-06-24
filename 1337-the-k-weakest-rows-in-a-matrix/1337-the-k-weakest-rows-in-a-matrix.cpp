class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int> vc;
        int row=mat.size();
        for(int i=0;i<row;i++)
        {
            int l=0,r=mat[i].size()-1,mid;
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(mat[i][mid]==1) l=mid+1;
                else r=mid-1;
            }
            pq.push({l,i});
            if(pq.size()>k) pq.pop();
        }
        
        while(!pq.empty())
        {
            vc.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(vc.begin(),vc.end());
        
        return vc;
    }
};