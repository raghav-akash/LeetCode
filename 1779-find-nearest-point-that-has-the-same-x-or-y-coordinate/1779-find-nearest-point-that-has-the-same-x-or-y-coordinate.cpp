class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int d=INT_MAX;
        int pos=-1;
        for(int i=0;i<points.size();i++){
            int dist=INT_MAX;
            if(points[i][0]==x){
                dist=abs(points[i][1]-y);
            }
            if(points[i][1]==y){
                dist=abs(points[i][0]-x);
            }
            
            if(dist<d)
            {
                d=dist;
                pos=i;
            }
        }
        return pos;
    }
};