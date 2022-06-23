class Solution {
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color,int source)
    {
        if(sr<0 || sr>=image.size() || sc>=image[0].size() || sc<0)
            return; //Edge Cases
        else if(image[sr][sc]!=source)
            return; //If the cell has a different value then source
        
        image[sr][sc]=color;
        
        dfs(image,sr+1,sc,color,source);//Down
        dfs(image,sr-1,sc,color,source);//Up
        dfs(image,sr,sc+1,color,source);//Right
        dfs(image,sr,sc-1,color,source);//Left
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        if(image[sr][sc]==color)
            return image;
        
        int source=image[sr][sc];
        dfs(image,sr,sc,color,source);
        return image;
    }
};