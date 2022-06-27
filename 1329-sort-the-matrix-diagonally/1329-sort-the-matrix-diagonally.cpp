class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>> mp;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mp[i-j].push_back(mat[i][j]);
            }
        }
        
        for(int key=-(m-1);key<n;key++)
        {
            sort(mp[key].begin(),mp[key].end());
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mat[i][j]=mp[i-j][0];
                mp[i-j].erase(mp[i-j].begin());
            }
        }
        
        return mat;
    }
};